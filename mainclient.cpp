/**************************************************************
#*  Тема: Разработать программу для формирования и отображения
#*  хода выполнения технических процессов
#*  Язык: С++
#*  Среда разработки: Qt creator
#*  Разработал: Бычков В.П.
#*  Дата: 20.03.2018
#***************************************************************
#*  Тема: Разработать программу для  формирования и отображения
#*  хода выполнения технических процессов
#****************************************************************
#*  Подпрограммы, используемые в программе:
#*       main - процедура для вывода формы login;
#*       slotLaunch - процедура для запуска и обработки
#*       сторонних процессов;
#*       slotSendToServer - процедура для отправки сообщений на
#*       сервер;
#*       loadSettings - процедура для загрузки данных для
#*       подключения к серверу;
#*       slotConnect - процедура для подключения к серверу;
#*       slotError - процедура для обработки ошибок при подключении.
#******************************************************************/

#include "mainclient.h"
#include "ui_mainclient.h"
#include "dialog2.h"
#include "systeminfo.h"
#include <QProcess>
#include <QDir>
#include <windows.h>
#include <QMessageBox>
#include <QTime>
#include <QHostInfo>
#include <QFIle>
#include <QSettings>
#include <QCloseEvent>
#define DIV 1024

static float CalculateCPULoad(unsigned long long idleTicks, unsigned long long totalTicks)
{
   static unsigned long long _previousTotalTicks = 0;
   static unsigned long long _previousIdleTicks = 0;

   unsigned long long totalTicksSinceLastTime = totalTicks-_previousTotalTicks;
   unsigned long long idleTicksSinceLastTime  = idleTicks-_previousIdleTicks;

   float ret = 1.0f-((totalTicksSinceLastTime > 0) ? ((float)idleTicksSinceLastTime)/totalTicksSinceLastTime : 0);

   _previousTotalTicks = totalTicks;
   _previousIdleTicks  = idleTicks;
   return ret;
}

static unsigned long long FileTimeToInt64(const FILETIME & ft) {
	return (((unsigned long long)(ft.dwHighDateTime))<<32)|((unsigned long long)ft.dwLowDateTime);
}

// Returns 1.0f for "CPU fully pinned", 0.0f for "CPU idle", or somewhere in between
// You'll need to call this at regular intervals, since it measures the load between
// the previous call and the current one.  Returns -1.0 on error.
float GetCPULoad()
{
   FILETIME idleTime, kernelTime, userTime;
   return GetSystemTimes(&idleTime, &kernelTime, &userTime) ? CalculateCPULoad(FileTimeToInt64(idleTime), FileTimeToInt64(kernelTime)+FileTimeToInt64(userTime)) : -1.0f;
}

MainClient::MainClient(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainClient)
{
    m_sSettingsFile = QApplication::applicationDirPath().left(1) + ":/config.ini";
    loadSettings();

    ui->setupUi(this);

    QProcess *process = new QProcess(this);
    QString GetConfig = QApplication::applicationDirPath() + "/../GetConfig.exe";
    process->start(GetConfig);
    process->waitForFinished(1000);

    mTcpSocket = new QTcpSocket(this);
    mTcpSocket->connectToHost(address, port);

    this->address = address;
    this->port = port;

    ui->setupUi(this);
    ui->addressLine->setText(this->address);
    ui -> portLine -> setText(QString::number(this -> port));
    ui->portLine->setValidator( new QIntValidator(0, 65535, this) );

    ui->ping->setCheckable(true);
    ui->ping->setStyleSheet("QPushButton { background-color:#242424; border-style: solid; border-color: #FFF; "
                            "border-top-width: 0.5px; padding:0px; margin:0px; color:#FFF}"
                            "QPushButton:checked { background-color: #F7D900; color:#242424};");
    ui->SystemInfoPB->setCheckable(true);
    ui->SystemInfoPB->setStyleSheet("QPushButton { background-color:#242424; border-style: solid; border-color: #FFF; "
                            "border-top-width: 0.5px; padding:0px; margin:0px; color:#FFF}"
                            "QPushButton:checked { background-color: #F7D900; color:#242424};");
    ui->configPB->setCheckable(true);
    ui->configPB->setStyleSheet("QPushButton { background-color:#242424; border-style: solid; border-color: #FFF; "
                            "border-top-width: 0.5px; padding:0px; margin:0px; color:#FFF}"
                            "QPushButton:checked { background-color: #F7D900; color:#242424};");

    ui->exitPB->setCheckable(true);
    ui->exitPB->setStyleSheet("QPushButton { background-color:#242424; border-style: solid; border-color: #FFF; "
                            "border-top-width: 0.5px; padding:0px; margin:0px; color:#FFF}"
                            "QPushButton:pressed { background-color: #F7D900; color:#242424};");
    ui->launchPB->setCheckable(true);
    ui->launchPB->setStyleSheet("QPushButton { background-color:#242424; border-style: solid; border-color: #FFF; "
                            "border-top-width: 0.5px; padding:0px; margin:0px; color:#FFF}"
                            "QPushButton:pressed { background-color: #F7D900; color:#242424};");

    ui->reconnectPB->setCheckable(true);
    ui->reconnectPB->setStyleSheet("QPushButton { background-color:#242424; border-style: solid; border-color: #FFF; "
                            "border-top-width: 1px; padding:0px; margin:0px; color:#FFF}"
                            "QPushButton:pressed { background-color: #F7D900; color:#242424};");

    QLabel* labels[6] = {ui->PCName, ui->OSName, ui->label_10, ui->cpuName, ui->gpuName, ui->OperMemory};

    QString file = QApplication::applicationDirPath() + "/../config.txt";
    QFile inputFile(file);
    if (inputFile.open(QIODevice::ReadOnly))
    {
       QTextStream in(&inputFile);
       in.setCodec("UTF-8");
       qint8 i = 0;
       while (!in.atEnd())
       {
          QString line = in.readLine();
          labels[i]->setText(line);
          i++;
       }
       inputFile.close();
    }

    connect(ui->setdefPB, SIGNAL(clicked()), SLOT(slotSetDefault()));
    connect(ui->connectPB, SIGNAL(clicked()), SLOT(saveSettings()));
    connect(ui->SystemInfoPB, SIGNAL(clicked()), SLOT(showinfo()));
    connect(ui->ping, SIGNAL(clicked()), SLOT(slotMainPage()));
    connect(mTcpSocket, SIGNAL(disconnected()), SLOT(slotDisconected()));
	connect(mTcpSocket, SIGNAL(connected()), SLOT(slotConnected()));
	connect(mTcpSocket, SIGNAL(readyRead()), SLOT(slotReadyRead()));
	connect(mTcpSocket, SIGNAL(error(QAbstractSocket::SocketError)),
			   this, SLOT(slotError(QAbstractSocket::SocketError)));
    connect(ui->exitPB, SIGNAL(clicked()), SLOT(slotAboutToExit()));
    connect(this, SIGNAL(closing()), SLOT(slotSender()));
    connect(this, SIGNAL(closing()), SLOT(slotSendToServer()));
    connect(this, SIGNAL(error(QString)), SLOT(slotHint(QString)));
    connect(ui->configPB, SIGNAL(clicked()), SLOT(slotConfig()));
    connect(ui->reconnectPB, SIGNAL(clicked()), SLOT(slotConnect()));
    connect(this, SIGNAL(reconnect()), SLOT(slotConnect()));
    connect(ui->launchPB, SIGNAL(clicked()), SLOT(slotLaunch()));

	iNextBlocksize = 0;
    ui->ping->click();
}

MainClient::~MainClient()
{
	delete ui;
}

void MainClient::slotReadyRead()
{
	QDataStream in(mTcpSocket);
	in.setVersion(QDataStream::Qt_5_5);

	for(;;) {
		if (!iNextBlocksize) {
			if (mTcpSocket->bytesAvailable() < sizeof(quint16)) {
				break;
			}
			in >> iNextBlocksize;
		}

		if (mTcpSocket->bytesAvailable() < iNextBlocksize) {
			break;
		}
		QTime time;
		QString str;
		in >> time >> str;

		ui->listWidget->addItem(time.toString() + " " + str);
		iNextBlocksize = 0;
	}
}

/******************************************************
 *  slotError - процедура для обработки ошибок при
 * подключении к серверу.
 ******************************************************
 *  Формальный параметр:
 *       strError - строка, хранящая информацию об ошибке.
 ******************************************************/
void MainClient::slotError(QAbstractSocket::SocketError err)
{
    QString strError = QTime::currentTime().toString() + " Error: " + (err == QAbstractSocket::HostNotFoundError ?
									"The host was not found." :
									err == QAbstractSocket::RemoteHostClosedError ?
									"The remote host is closed." :
									err == QAbstractSocket::ConnectionRefusedError ?
									"The connection was refused." :
									QString(mTcpSocket->errorString())
									);
	ui->listWidget->addItem(strError);
    emit error(strError);
}

/******************************************************
 *  slotSendToServer - процедура для отправки сообщений
 * на сервер.
 ******************************************************
 *  Формальные параметры:
 *       message - указатель на экземпляр класса QProcess;
 *       obj - путь к исполняемому файлу;
 *       arrBlock - массив байт для отправки сообщения;
 *       Name - имя сервера.
 ******************************************************/
void MainClient::slotSendToServer()
{
    QString Message = "";
    QObject* obj = sender();
      if( obj == ui->exitPB )
      {
         Message = "Program closed by operator";
      }

      QByteArray  arrBlock;
      QString Name = QHostInfo::localHostName();

      QDataStream out(&arrBlock, QIODevice::WriteOnly);
      out.setVersion(QDataStream::Qt_5_5);
      out << quint16(0) << QTime::currentTime() << Name << Message;

      out.device()->seek(0);
      out << quint16(arrBlock.size() - sizeof(quint16));

      mTcpSocket->write(arrBlock);

      if( obj == ui->exitPB or obj == this)
      {
         //emit(this->close());
      }
      //emit(this->messaged());
}

void MainClient::slotConnected()
{
    ui->status->setText("Подключено");
}

void MainClient::slotDisconected()
{
    ui->status->setText("Не подключено");
}


/******************************************************
 *  slotConnect - процедура для подключения к серверу.
 ******************************************************/
void MainClient::slotConnect(){
    mTcpSocket->disconnectFromHost();
    loadSettings();
    mTcpSocket->connectToHost(address, port);
}

void MainClient::slotSender(){
    QObject* obj = sender();
    //ui->label_2->setText(obj->objectName());
    qDebug() << obj->objectName();
}

void MainClient::slotConfig(){
  ui->stackedWidget->setCurrentIndex(1);
}

void MainClient::closeEvent (QCloseEvent *event)
{
    QMessageBox::StandardButton resBtn = QMessageBox::question( this, "Закрыть приложение",
                                                                tr("Вы уверены?\n"),
                                                                QMessageBox::No | QMessageBox::Yes,
                                                                QMessageBox::Yes);
    if (resBtn != QMessageBox::Yes) {
        event->ignore();
    } else {
        emit(closing());
        event->accept();
    }
}

void MainClient::slotAboutToExit()
{
    close();
}

/******************************************************
 *  loadSettings - процедура для загрузки данных
 * подключения к серверу.
 ******************************************************
 *  Формальный параметр:
 *       settings - объект, хранящий настройки подключения;
 ******************************************************/
void MainClient::loadSettings()
{
    QSettings settings(m_sSettingsFile, QSettings::NativeFormat);
    address = settings.value("current/address", "localhost").toString();
    port = settings.value("current/port", 32094).toInt();
}

void MainClient::showinfo(){
    ui->stackedWidget->setCurrentIndex(2);
}

void MainClient::slotMainPage(){
    ui->stackedWidget->setCurrentIndex(0);
}

/******************************************************
 *  slotLaunch - процедура для запуска и обработки
 * соторнних процессов.
 ******************************************************
 *  Формальные параметры:
 *       process - указатель на экземпляр класса QProcess;
 *       file - путь к исполняемому файлу.
 ******************************************************/
void MainClient::slotLaunch(){
    QProcess *process = new QProcess(this);
    QString file = QApplication::applicationDirPath() + "/../TestUnit.exe";
    process->start(file);
    process->waitForFinished(30000);
    qDebug()<<process->exitCode();
}

void MainClient::slotSetDefault()
{
    QSettings settings(m_sSettingsFile, QSettings::NativeFormat);
    this->address = settings.value("default/address", "localhost").toString();
    this->port = settings.value("default/port", 32094).toInt();
    ui->addressLine->setText(this->address);
    ui->portLine->setText(QString::number(this->port));

}

void MainClient::saveSettings(){
    QSettings settings(m_sSettingsFile, QSettings::NativeFormat);
    settings.setValue("current/port", ui->portLine->text());
    settings.setValue("current/address", ui->addressLine->text());
    //this->accept();
}

void MainClient::slotHint(QString err){
    ui->label_2->setText(err);
}
