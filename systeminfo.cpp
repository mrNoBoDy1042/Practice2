#include "systeminfo.h"
#include "ui_systeminfo.h"
#include <sstream>
#include <string>
#include <QFile>

SystemInfo::SystemInfo(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SystemInfo)
{
    ui->setupUi(this);

    QLabel* labels[6] = {ui->PCName, ui->OSName, ui->label_7, ui->cpuName, ui->gpuName, ui->OperMemory};

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
}

SystemInfo::~SystemInfo()
{
    delete ui;
}
