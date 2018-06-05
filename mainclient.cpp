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
#include <QProcess>
#include <QDir>
#include <QMessageBox>
#include <QTime>
#include <QHostInfo>
#include <QFIle>
#include <QSettings>
#include <QCloseEvent>

//---------------------------------------------------------------------------------------------------------
// MV's changes

#include <QTime>

// cpu
#include <thread>
#include <windows.h>
#include <stdio.h>
#include <tchar.h>

#define DIV 1024
#define WIDTH 7

/******************************************************
 *  CalculateCPULoad - функция для подсчета загруженности
 * процессора.
 ******************************************************
 *   Формальные параметры:
 *       idleTicks - ;
 *       totalTicks - .
 ******************************************************
 *  Локальные переменные:
 *       _previousTotalTicks - ;
 *       _previousIdleTicks - ;
 *       totalTicksSinceLastTime - ;
 *       idleTicksSinceLastTime - ;
 *       ret - .
 ******************************************************/
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

/******************************************************
 *  FileTimeToInt64 - функция для конвертации из типа
 * FILETIME в INT64.
 ******************************************************
 *   Формальный параметр:
 *       ft - .
 ******************************************************/
static unsigned long long FileTimeToInt64(const FILETIME & ft) {
	return (((unsigned long long)(ft.dwHighDateTime))<<32)|((unsigned long long)ft.dwLowDateTime);
}
// Returns 1.0f for "CPU fully pinned", 0.0f for "CPU idle", or somewhere in between
// You'll need to call this at regular intervals, since it measures the load between
// the previous call and the current one.  Returns -1.0 on error.

/******************************************************
 *  GetCPULoad - функция для получения текущей загруженности
 *  процессора.
 ******************************************************
 *  Локальные переменные:
 *       idleTime - ;
 *       kernelTime - ;
 *       userTime - .
 ******************************************************/
float GetCPULoad()
{
   FILETIME idleTime, kernelTime, userTime;
   return GetSystemTimes(&idleTime, &kernelTime, &userTime) ? CalculateCPULoad(FileTimeToInt64(idleTime), FileTimeToInt64(kernelTime)+FileTimeToInt64(userTime)) : -1.0f;
}


// gpu
// respect http://eliang.blogspot.nl/2011/05/getting-nvidia-gpu-usage-in-c.html
// magic numbers, do not change them
#define NVAPI_MAX_PHYSICAL_GPUS   64
#define NVAPI_MAX_USAGES_PER_GPU  34
// function pointer types
typedef int *(*NvAPI_QueryInterface_t)(unsigned int offset);
typedef int  (*NvAPI_Initialize_t)();
typedef int  (*NvAPI_EnumPhysicalGPUs_t)(int **handles, int *count);
typedef int  (*NvAPI_GPU_GetUsages_t)(int *handle, unsigned int *usages);

/******************************************************
 *  GetLoad - процедура для обработки информации о
 * загруженности системы.
 ******************************************************
 *   Формальный параметр:
 *       M - .
 ******************************************************
 *  Локальные переменные:
 *       hmod - ;
 *       NvAPI_QueryInterface - ;
 *       NvAPI_Initialize - ;
 *       NvAPI_EnumPhysicalGPUs - ;
 *       NvAPI_GPU_GetUsages - ;
 *       gpuCount - ;
 *       gpuHandles - ;
 *       gpuUsages - ;
 *       count - ;
 *       statex - .
 ******************************************************/
void GetLoad(MainClient* M)
{    //bool nvapi = false;
    HMODULE hmod = LoadLibraryA("nvapi.dll");
    if (hmod == NULL)
    {
        qDebug() << "Couldn't find nvapi.dll";
        return;
    }

    // nvapi.dll internal function pointers
    NvAPI_QueryInterface_t      NvAPI_QueryInterface     = NULL;
    NvAPI_Initialize_t          NvAPI_Initialize         = NULL;
    NvAPI_EnumPhysicalGPUs_t    NvAPI_EnumPhysicalGPUs   = NULL;
    NvAPI_GPU_GetUsages_t       NvAPI_GPU_GetUsages      = NULL;

    // nvapi_QueryInterface is a function used to retrieve other internal functions in nvapi.dll
    NvAPI_QueryInterface = (NvAPI_QueryInterface_t) GetProcAddress(hmod, "nvapi_QueryInterface");

    // some useful internal functions that aren't exported by nvapi.dll
    NvAPI_Initialize = (NvAPI_Initialize_t) (*NvAPI_QueryInterface)(0x0150E828);
    NvAPI_EnumPhysicalGPUs = (NvAPI_EnumPhysicalGPUs_t) (*NvAPI_QueryInterface)(0xE5AC921F);
    NvAPI_GPU_GetUsages = (NvAPI_GPU_GetUsages_t) (*NvAPI_QueryInterface)(0x189A1FDF);

    if (NvAPI_Initialize == NULL || NvAPI_EnumPhysicalGPUs == NULL ||
    NvAPI_EnumPhysicalGPUs == NULL || NvAPI_GPU_GetUsages == NULL)
    {
        qDebug() << "Couldn't get functions in nvapi.dll";
        hmod = NULL;
        return;
    }

    // initialize NvAPI library, call it once before calling any other NvAPI functions
    (*NvAPI_Initialize)();

    int          gpuCount = 0;
    int         *gpuHandles[NVAPI_MAX_PHYSICAL_GPUS] = { NULL };
    unsigned int gpuUsages[NVAPI_MAX_USAGES_PER_GPU] = { 0 };

    // gpuUsages[0] must be this value, otherwise NvAPI_GPU_GetUsages won't work
    gpuUsages[0] = (NVAPI_MAX_USAGES_PER_GPU * 4) | 0x10000;

    (*NvAPI_EnumPhysicalGPUs)(gpuHandles, &gpuCount);

    quint64 count = 0;
    while (!M->stopped)
    {
    emit M->change(QString::number((int)M->dynamicInformation.CPU), QString::number((int)M->dynamicInformation.GPU));
    if (M->mTcpSocket->state() == QAbstractSocket::ConnectedState)
        {
            // CPU
            M->dynamicInformation.CPU = roundf(GetCPULoad() * 100.0);

            // GPU
            (*NvAPI_GPU_GetUsages)(gpuHandles[0], gpuUsages);
            M->dynamicInformation.GPU = gpuUsages[3];

            // RAM
            MEMORYSTATUSEX statex;
            statex.dwLength = sizeof (statex);
            GlobalMemoryStatusEx(&statex);
            M->dynamicInformation.RAM = statex.dwMemoryLoad;
            M->SendInfo(0);

            //M->UpdateLabel(QString::number((int)M->dynamicInformation.CPU), QString::number((int)M->dynamicInformation.GPU));

            qDebug() << M->dynamicInformation.CPU;
            qDebug() << M->dynamicInformation.GPU;
            qDebug() << M->dynamicInformation.RAM;
        }
        ++count;
        Sleep(1000);
    }
}

void MainClient::GetLoadCycle()
{
//        QEventLoop loop;
//        QTimer timer;
//        timer.setInterval(1000); // 2 sec
//        connect (&timer, SIGNAL(timeout()), &loop, SLOT(quit()));
//        timer.start();
//        loop.exec();


//QTimer timer;
//timer.start(1000);
//qApp->exec();



//        QTime timer;
//        timer.start();
//        for (;timer.elapsed() < 1000;)
//            qApp->processEvents(0);
}

/******************************************************
 *  SendInfo - метод для отправки информации на сервер.
 ******************************************************
 *   Формальный параметр:
 *       b - .
 ******************************************************
 *  Локальные переменные:
 *       arrBlock - ;
 *       out - .
 ******************************************************/
void MainClient::SendInfo(char b)
{
    QByteArray  arrBlock;
    QDataStream out(&arrBlock, QIODevice::WriteOnly);
    out.setVersion(QDataStream::Qt_5_5);

    if (b == 0) // dynamic info
    {
        out << quint8(0) << (QString)"Dynamic" << dynamicInformation;
    }
    else if (b == 1) // static info
    {
        out << quint8(0) << (QString)"Static" << staticInformation;
    }
    else //(b == 2) // exitcode
    {
        out << quint8(0) << (QString)"GetRand" << exitcode;
    }

    out.device()->seek(0);
    out << quint8(arrBlock.size() - sizeof(quint8));
    mTcpSocket->write(arrBlock);
    mTcpSocket->flush();
}

/******************************************************
 *  slotReadyRead - метод для получения сообщений от сервера.
 ******************************************************
 *  Локальные переменные:
 *       in - ;
 *       iNextBlocksize - ;
 *       Msg - .
 ******************************************************/
void MainClient::slotReadyRead()
{
    QDataStream in(mTcpSocket);
    in.setVersion(QDataStream::Qt_5_5);

    iNextBlocksize = 0;
    while(true)
    {
        if (!iNextBlocksize){
            if (mTcpSocket->bytesAvailable() < sizeof(quint8))
                break;

            in >> iNextBlocksize;
        }

        if (mTcpSocket->bytesAvailable() < iNextBlocksize)
            break;

        QString Msg;
        in >> Msg;

        if (Msg == "GetRand")
        {
            // run exitcode
            slotLaunch();
            SendInfo(2);
            break;
        }

        iNextBlocksize = 0;
    }
}

/******************************************************
 *  slotConnected - метод для обработки события при
 * установлении соединения с сервером.
 ******************************************************/
void MainClient::slotConnected()
{
    ui->status->setText("Подключено");

    //connect(&workerThread, &QThread::started, this, GetLoad);
    SendInfo(1);
    //workerThread.start();
}

//---------------------------------------------------------------------------------------------------------

/******************************************************
 *  getTasks - метод для получения и вывода запущенных
 * процессов.
 ******************************************************
 *  Локальные переменные:
 *       procName - ;
 *       hSnap - ;
 *       pc32 - ;
 *       i - ;
 *       proc - ;
 *       curHandle - ;
 *       pmc - ;
 *       ID - .
 ******************************************************/
void MainClient::getTasks()
{
    qDebug() << "process";

    ui->tableWidget->clearContents();
    ui->tableWidget->model()->removeRows(0, ui->tableWidget->rowCount());
    ui->tableWidget->setRowCount(0);
    QString procName;
    HANDLE hSnap = CreateToolhelp32Snapshot(TH32CS_SNAPPROCESS, 0);

    if (hSnap  == NULL)
    {
        QMessageBox::critical(0, "ОШИБКА", "Error Load ToolHelp", QMessageBox::Close);
        return;
    }

    PROCESSENTRY32 pc32 = { sizeof(pc32) };
    quint64 i = 0;
    QSet<QString> proc;

    if (Process32First(hSnap , &pc32))
    {
        while (Process32Next(hSnap , &pc32))
        {
            HANDLE curHandle = OpenProcess(PROCESS_ALL_ACCESS, false, pc32.th32ProcessID);
            PROCESS_MEMORY_COUNTERS_EX pmc;
            GetProcessMemoryInfo(curHandle,
                reinterpret_cast<PPROCESS_MEMORY_COUNTERS>(&pmc), sizeof(pmc));

            qint64 ID = pc32.th32ProcessID ;
            procName = copyToQString(pc32.szExeFile);
            if (!proc.contains(procName))
            {
                ui->tableWidget->insertRow(i);
                proc.insert(procName);
                ui->tableWidget->setItem(i,0, new QTableWidgetItem(QString::number(ID)));
                ui->tableWidget->setItem(i,1, new QTableWidgetItem(procName));
                ui->tableWidget->setItem(i,2, new QTableWidgetItem(QString::number(pmc.WorkingSetSize / 1024)));

                ++i;

                CloseHandle(curHandle);
            }
        }
    }
    CloseHandle(hSnap);
    ui->tableWidget->resizeColumnsToContents();
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
    qDebug() << GetConfig;
    process->start(GetConfig);
    process->waitForFinished(2000);

    mTcpSocket = new QTcpSocket(this);
    mTcpSocket->connectToHost(address, port);

    this->address = address;
    this->port = port;



    ui->setupUi(this);
    ui->addressLine->setText(this->address);
    ui->portLine -> setText(QString::number(this -> port));
    ui->portLine->setValidator( new QIntValidator(0, 65535, this) );

    QPushButton *rb[] = {ui->configPB, ui->launchPB, ui->ping};
    int i = 0;
    while (i <= 2) {

        rb[i]->setCheckable(true);
        rb[i]->setStyleSheet("QPushButton { background-color:#242424; border-style: solid; border-color: #FFF; "
                                   "border-top-width: 0.5px; padding:0px; margin:0px; color:#FFF}"
                                   "QPushButton:checked { background-color: #F7D900; color:#242424};");
        i++;
    }
    ui->reconnectPB->setStyleSheet("QPushButton { background-color:#242424; border-style: solid; border-color: #FFF; "
                                   "border-top-width: 0.5px; padding:0px; margin:0px; color:#FFF}"
                                   "QPushButton:pressed { background-color: #F7D900; color:#242424};");
    ui->exitPB->setStyleSheet("QPushButton { background-color:#242424; border-style: solid; border-color: #FFF; "
                              "border-top-width: 0.5px; padding:0px; margin:0px; color:#FFF}"
                              "QPushButton:pressed { background-color: #F7D900; color:#242424};");

    QLabel* labels[6] = {ui->PCName_2, ui->OSName_2, ui->label_19, ui->cpuName_2, ui->gpuName_2, ui->label_2};

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

	staticInformation.PCName = labels[0]->text();
	staticInformation.OS	 = labels[1]->text();
	staticInformation.Bit	 = labels[2]->text();
	staticInformation.CPU	 = labels[3]->text();
	staticInformation.GPU	 = labels[4]->text();
	staticInformation.RAM	 = labels[5]->text();
    ui->label_2->setText("");

    connect(ui->setdefPB, SIGNAL(clicked()), SLOT(slotSetDefault()));
    connect(ui->connectPB, SIGNAL(clicked()), SLOT(saveSettings()));

    //connect(ui->ping, SIGNAL(clicked()), SLOT(slotMainPage()));
    //connect(ui->launchPB, SIGNAL(clicked()), SLOT(slotProcess()));
    connect(mTcpSocket, SIGNAL(disconnected()), SLOT(slotDisconected()));
	connect(mTcpSocket, SIGNAL(connected()), SLOT(slotConnected()));
	connect(mTcpSocket, SIGNAL(readyRead()), SLOT(slotReadyRead()));
    connect(mTcpSocket, SIGNAL(error(QAbstractSocket::SocketError)),
               this, SLOT(slotError(QAbstractSocket::SocketError)));
    connect(ui->exitPB, SIGNAL(clicked()), SLOT(slotAboutToExit()));
    connect(ui->reconnectPB, SIGNAL(clicked()), SLOT(slotConnect()));
    connect(this, SIGNAL(reconnect()), SLOT(slotConnect()));
    connect(ui->pushButton_2, SIGNAL(clicked()), SLOT(slotLaunch()));
    connect(this,SIGNAL(change(QString,QString)),this,SLOT(UpdateLabel(QString,QString)),Qt::BlockingQueuedConnection);
    connect(ui->configPB, SIGNAL(clicked()), SLOT(slotButtonHandler()));
    connect(ui->ping, SIGNAL(clicked()), SLOT(slotButtonHandler()));
    connect(ui->launchPB, SIGNAL(clicked()), SLOT(slotButtonHandler()));

    getTasks();

	iNextBlocksize = 0;
    ui->ping->click();

    ui->tableWidget->setColumnCount(3);
    ui->tableWidget->setShowGrid(true);
    ui->tableWidget->setSelectionMode(QAbstractItemView::SingleSelection);
    ui->tableWidget->setSelectionBehavior(QAbstractItemView::SelectRows);
    ui->tableWidget->horizontalHeader()->setStretchLastSection(true);
    ui->tableWidget->setHorizontalHeaderLabels(QStringList()
                                               << ("ID")
                                               << ("Процесс")
                                               << ("Память")
                                               );
    ui->tableWidget->setStyleSheet(" QHeaderView::section{ background-color: #242424; color:#FFF}");


    stopped = false;
    // instant send of pc load
    std::thread tload(GetLoad, this);
    tload.detach();
}

/******************************************************
 *  ~MainClient - деструктор класса MainClient.
 ******************************************************/
MainClient::~MainClient()
{
//	workerThread.terminate();
    stopped = true;
	delete ui;
}

/******************************************************
 *  copyToQString - метод для конвертации массива в строку.
 ******************************************************
 *   Формальный параметр:
 *       array - .
 ******************************************************
 *  Локальные переменные:
 *       string - ;
 *       i - .
 ******************************************************/
QString MainClient::copyToQString(WCHAR array[])
{
    QString string;
    int i = 0;

    while (array[i] != 0)
    {
        string[i] = array[i];
        i++;
    }
    return string;
}

/******************************************************
 *  slotButtonHandler - метод для обработки взаимодействия
 * с панелью главного меню.
 ******************************************************
 *  Локальная переменная:
 *       obj - .
 ******************************************************/
void MainClient::slotButtonHandler()
{
    ui->configPB->setChecked(false);
    ui->launchPB->setChecked(false);
    ui->ping->setChecked(false);
    QObject* obj = sender();
      if( obj == ui->configPB)
      {
         ui->configPB->setChecked(true);
         ui->stackedWidget->setCurrentIndex(1);
      }
      else if( obj == ui->launchPB)
      {
         ui->launchPB->setChecked(true);
         ui->stackedWidget->setCurrentIndex(4);
      }
      else if( obj == ui->ping)
      {
         ui->ping->setChecked(true);
         ui->stackedWidget->setCurrentIndex(0);
      }
}

/******************************************************
 *  UpdateLabel - метод для вывода информации о
 * загруженности компьютера.
 ******************************************************
 *   Формальные параметры:
 *       CPU - ;
 *       GPU - .
 ******************************************************/
void MainClient::UpdateLabel(QString CPU, QString GPU)
{
    ui->cpuUsage->setText(CPU+"%");
    ui->gpuUsage->setText(GPU+"%");
}


/******************************************************
 *  slotError - процедура для обработки ошибок при
 * подключении к серверу.
 ******************************************************
 *   Формальный параметр:
 *       err - .
 ******************************************************
 *  Локальная переменная:
 *       strError - строка, хранящая информацию об ошибке.
 ******************************************************/
void MainClient::slotError(QAbstractSocket::SocketError err)
{
    QString strError = QTime::currentTime().toString() + " Ошибка: " + (err == QAbstractSocket::HostNotFoundError ?
                                    "Сервер не найден." :
                                    err == QAbstractSocket::RemoteHostClosedError ?
                                    "Удаленный сервер закрыт." :
                                    err == QAbstractSocket::ConnectionRefusedError ?
                                    "Отказано в соединении." :
                                    QString(mTcpSocket->errorString())
                                    );
    ui->listWidget->addItem(strError);
}


/******************************************************
 *  slotDisconected - метод для вывода сообщения при
 * отключении от сервера.
 ******************************************************/
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

/******************************************************
 *  closeEvent - метод для обработки и вывода информации
 * об ошибках при подключении к серверу.
 ******************************************************
 *   Формальный параметр:
 *       event - .
 ******************************************************
 *  Локальная переменная:
 *       resBtn - .
 ******************************************************/
void MainClient::closeEvent (QCloseEvent *event)
{
    QMessageBox::StandardButton resBtn = QMessageBox::question( this, "Закрыть приложение",
                                                                tr("Вы уверены?\n"),
                                                                QMessageBox::No | QMessageBox::Yes,
                                                                QMessageBox::Yes);
    if (resBtn != QMessageBox::Yes) {
        event->ignore();
    } else {
        event->accept();
    }
}

/******************************************************
 *  slotAboutToExit - метод для закрытия формы.
 ******************************************************/
void MainClient::slotAboutToExit()
{
    close();
}

/******************************************************
 *  loadSettings - процедура для загрузки данных
 * подключения к серверу.
 ******************************************************
 *  Локальная переменная:
 *       settings - объект, хранящий настройки подключения;
 ******************************************************/
void MainClient::loadSettings()
{
    QSettings settings(m_sSettingsFile, QSettings::NativeFormat);
    address = settings.value("current/address", "localhost").toString();
	port = settings.value("current/port", 32094).toInt();
}

/******************************************************
 *  slotLaunch - процедура для запуска и обработки
 * соторнних процессов.
 ******************************************************
 *  Локальные переменные:
 *       process - указатель на экземпляр класса QProcess;
 *       file - путь к исполняемому файлу.
 ******************************************************/
void MainClient::slotLaunch(){

    QProcess *process = new QProcess(this);
    QString file = QApplication::applicationDirPath() + "/../TestUnit.exe";
    process->start(file);
    getTasks();
    process->waitForFinished(30000);

    //---------------------------------------------------------------------------------------------------------
    exitcode = process->exitCode();
    qDebug() << exitcode;
}

/******************************************************
 *  slotSetDefault - метод для установки поумолчанию
 * параметров подключения к серверу.
 ******************************************************
 *  Локальныая переменная:
 *       settings - .
 ******************************************************/
void MainClient::slotSetDefault()
{
    QSettings settings(m_sSettingsFile, QSettings::NativeFormat);
    this->address = settings.value("default/address", "localhost").toString();
    this->port = settings.value("default/port", 32094).toInt();
    ui->addressLine->setText(this->address);
    ui->portLine->setText(QString::number(this->port));

}

/******************************************************
 *  saveSettings - метод для сохранения текущих
 * параметров подключения к серверу.
 ******************************************************
 *  Локальные переменные:
 *       settings - .
 ******************************************************/
void MainClient::saveSettings(){
    QSettings settings(m_sSettingsFile, QSettings::NativeFormat);
    settings.setValue("current/port", ui->portLine->text());
    settings.setValue("current/address", ui->addressLine->text());
}
