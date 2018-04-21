/******************************************************
 *  main - процедура для вывода формы login.     	         
 ******************************************************
 *  Формальные параметры:                             		         
 *       l - объект класса Login.                		         
 ******************************************************/

#include "login.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    Login l;
    l.show();
    return a.exec();
}
