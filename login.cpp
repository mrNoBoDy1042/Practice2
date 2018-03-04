#include "login.h"
#include "ui_login.h"
#include "mainclient.h"

Login::Login(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Login)
{
    ui->setupUi(this);

    connect(ui->pushButton, SIGNAL(clicked()), SLOT(slotEnter()));
    connect(ui->pushButton_2, SIGNAL(clicked()), SLOT(slotCancel()));
}

Login::~Login()
{
    delete ui;
}

void Login::slotCancel(){
    this->reject();
}

void Login::slotEnter(){
    if(ui->lineEdit->text() != "" and ui->lineEdit_2->text() != "" and ui->lineEdit_3->text() != ""){
        w = new MainClient();
        w->show();
        this->close();

    }
}
