#include "systeminfo.h"
#include "ui_systeminfo.h"
//#include <windows.h>
//#include <sstream>

SystemInfo::SystemInfo(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SystemInfo)
{

//    std::ostringstream stream;

//    SYSTEM_INFO siSysInfo;
//    GetSystemInfo(&siSysInfo);

//    MEMORYSTATUSEX statex;
//    statex.dwLength = sizeof (statex);
//    GlobalMemoryStatusEx (&statex);

    ui->setupUi(this);

    ui->cpuName->setText(QSysInfo::currentCpuArchitecture());
    ui->OSName->setText(QSysInfo::productType() + " " + QSysInfo::productVersion());
    ui->PCName->setText(QHostInfo::localHostName());

//    stream << statex.dwMemoryLoad;
//    std::string str = stream.str();

//    ui->OperMemory->setText("qewd");

//    printf("  Number of processors: %u\n",
//       siSysInfo.dwNumberOfProcessors);
//    printf("  Processor type: %u\n", siSysInfo.dwProcessorType);
//    siSysInfo.wProcessorArchitecture
}

SystemInfo::~SystemInfo()
{
    delete ui;
}
