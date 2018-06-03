#ifndef LOGIN_H
#define LOGIN_H

#include <QDialog>

#include "mainclient.h"

namespace Ui {
    class Login;
}

class Login : public QDialog
{
    Q_OBJECT

    public:
        explicit Login(QWidget *parent = 0);
        ~Login();
        MainClient *w;

    private:
        Ui::Login *ui;

    private slots:
        void slotEnter();
        void slotCancel();

};

#endif // LOGIN_H
