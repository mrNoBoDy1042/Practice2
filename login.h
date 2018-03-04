#ifndef LOGIN_H
#define LOGIN_H

#include <QDialog>
#include <QMainWindow>

namespace Ui {
class Login;
}

class Login : public QDialog
{
    Q_OBJECT

public:
    explicit Login(QWidget *parent = 0);
    ~Login();
    QMainWindow *w;

private:
    Ui::Login *ui;

private slots:
    void slotEnter();
    void slotCancel();

};

#endif // LOGIN_H
