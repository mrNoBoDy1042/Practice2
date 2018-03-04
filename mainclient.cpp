#include "mainclient.h"
#include "ui_mainclient.h"
#include "dialog2.h"
#include "systeminfo.h"

/* STL */
#include <windows.h>

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


/* QT Framework */
#include <QMessageBox>
#include <QTime>
#include <QHostInfo>
#include <QFIle>
#include <QSettings>


MainClient::MainClient(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainClient)
{
    m_sSettingsFile = QApplication::applicationDirPath().left(1) + ":/config.ini";
    loadSettings();

    ui->setupUi(this);
    d =  new Dialog2(this, this->address, this->port);
    sysinfo =  new SystemInfo(this);

    connect(ui->SystemInfoPB, SIGNAL(clicked()), SLOT(showinfo()));

	mTcpSocket = new QTcpSocket(this);
    mTcpSocket->connectToHost(address, port);

    connect(ui->ping, SIGNAL(clicked(bool)), SLOT(slotSendToServer(bool)));

    connect(mTcpSocket, SIGNAL(disconnected()), SLOT(slotDisconected()));

	connect(mTcpSocket, SIGNAL(connected()), SLOT(slotConnected()));
	connect(mTcpSocket, SIGNAL(readyRead()), SLOT(slotReadyRead()));

	connect(mTcpSocket, SIGNAL(error(QAbstractSocket::SocketError)),
			   this, SLOT(slotError(QAbstractSocket::SocketError)));

    connect(ui->exitPB, SIGNAL(clicked(bool)), SLOT(slotSendToServer(bool)));

    connect(this, SIGNAL(xclicked()), SLOT(slotSendToServer()));
    //connect(this, SIGNAL(closing()), SLOT(slotSendToServer()));
    //connect(this, SIGNAL(close()), SLOT(slotSender()));

    connect(this, SIGNAL(closing()), SLOT(slotSender()));
    connect(this, SIGNAL(xclicked()), SLOT(slotSendToServer()));

    connect(this, SIGNAL(error()), SLOT(slotConfig()));

    connect(ui->configPB, SIGNAL(clicked()), SLOT(slotConfig()));

    connect(ui->reconnectPB, SIGNAL(clicked()), SLOT(slotConnect()));
    connect(this, SIGNAL(reconnect()), SLOT(slotConnect()));
	iNextBlocksize = 0;
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
    emit error();
}



void MainClient::slotSendToServer(bool)
{
    qDebug()<<"send message";
    QString Message = "";
    QObject* obj = sender();
      if( obj == ui->exitPB )
      {
         Message = "Program closed by operator";
      }
      else if (obj == ui->ping) {
          Message = "PINGED";
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
      emit(this->messaged());
}

void MainClient::slotConnected()
{
    ui->status->setText("Подключено");
}

void MainClient::slotDisconected()
{
    ui->status->setText("Не подключено");
}

void MainClient::slotConnect(){
    mTcpSocket->disconnectFromHost();
    loadSettings();
    mTcpSocket->connectToHost(address, port);
}

void MainClient::slotSender(){
    QObject* obj = sender();
    ui->label_2->setText(obj->objectName());
    qDebug() << obj->objectName();
}

void MainClient::slotConfig(){
    // вызов диалогового окна для ввода порта, адреса и пароля
    if (!d->isVisible() and this->isVisible()){
        d->exec();
        if (d->Accepted){
            emit(reconnect());
        }
    }
}


#include <QCloseEvent>
void MainClient::closeEvent (QCloseEvent *event)
{
   emit(xclicked());
}


void MainClient::loadSettings()
{
 QSettings settings(m_sSettingsFile, QSettings::NativeFormat);
 address = settings.value("current/address", "localhost").toString();
 port = settings.value("current/port", 32094).toInt();
 qDebug()<<address+" MC";
 //ui->label_4->setText(this->port);
}

void MainClient::showinfo(){
    if (!sysinfo->isVisible()){
        sysinfo->exec();
    }
}
