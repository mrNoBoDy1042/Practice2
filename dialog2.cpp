#include "dialog2.h"
#include "ui_dialog2.h"
#include "QFile"
#include "mainclient.h"
#include <QSettings>


Dialog2::Dialog2(QWidget *parent, QString address, int port) :
    QDialog(parent),
    ui(new Ui::Dialog2)
{
    this->address = address;
    this->port = port;



    ui->setupUi(this);
    ui->addressLine->setText(this->address);
    ui -> portLine -> setText(QString::number(this -> port));
    ui->portLine->setValidator( new QIntValidator(0, 65535, this) );

    connect(ui->setdefPB, SIGNAL(clicked()), SLOT(slotSetDefault()));
    connect(ui->connectPB, SIGNAL(clicked()), SLOT(saveSettings()));
    connect(ui->cancelPB, SIGNAL(clicked()), SLOT(slotCancel()));
}

Dialog2::~Dialog2()
{
    delete ui;
}
void Dialog2::slotSetDefault()
{
    QSettings settings(m_sSettingsFile, QSettings::NativeFormat);
    this->address = settings.value("default/address", "localhost").toString();
    this->port = settings.value("default/port", 32094).toInt();
    ui->addressLine->setText(this->address);
    ui->portLine->setText(QString::number(this->port));

}

void Dialog2::saveSettings()
{
 QSettings settings(m_sSettingsFile, QSettings::NativeFormat);
 settings.setValue("current/port", ui->portLine->text());
 settings.setValue("current/address", ui->addressLine->text());
 this->accept();
}

void Dialog2::slotCancel()
{
    this->reject();
}
