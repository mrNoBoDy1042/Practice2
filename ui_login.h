/********************************************************************************
** Form generated from reading UI file 'login.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_H
#define UI_LOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Login
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_3;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QDialog *Login)
    {
        if (Login->objectName().isEmpty())
            Login->setObjectName(QStringLiteral("Login"));
        Login->resize(303, 311);
        Login->setStyleSheet(QLatin1String("background-color: #1D1F20;\n"
"color: #FFF;"));
        label = new QLabel(Login);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(30, 20, 261, 21));
        QFont font;
        font.setPointSize(14);
        label->setFont(font);
        label->setFrameShape(QFrame::NoFrame);
        label_2 = new QLabel(Login);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(10, 70, 47, 13));
        QFont font1;
        font1.setPointSize(12);
        label_2->setFont(font1);
        label_3 = new QLabel(Login);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(10, 130, 81, 16));
        label_3->setFont(font1);
        label_4 = new QLabel(Login);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(10, 190, 47, 16));
        label_4->setFont(font1);
        lineEdit = new QLineEdit(Login);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(10, 90, 281, 20));
        lineEdit->setStyleSheet(QLatin1String("background-color:#27282A;\n"
"  border-style: solid;\n"
"  border-color: #FFF;\n"
"  border-width: 1px;"));
        lineEdit_2 = new QLineEdit(Login);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(10, 150, 281, 20));
        lineEdit_2->setStyleSheet(QLatin1String("background-color:#27282A;\n"
"  border-style: solid;\n"
"  border-color: #FFF;\n"
"  border-width: 1px;"));
        lineEdit_3 = new QLineEdit(Login);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(10, 210, 113, 20));
        lineEdit_3->setStyleSheet(QLatin1String("background-color:#27282A;\n"
"  border-style: solid;\n"
"  border-color: #FFF;\n"
"  border-width: 1px;"));
        pushButton = new QPushButton(Login);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(124, 270, 81, 23));
        QFont font2;
        font2.setPointSize(10);
        pushButton->setFont(font2);
        pushButton->setStyleSheet(QLatin1String("background-color:#27282A;\n"
"  border-style: solid;\n"
"  border-color: #FFF;\n"
"  border-width: 1px;"));
        pushButton_2 = new QPushButton(Login);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(210, 270, 81, 23));
        pushButton_2->setFont(font2);
        pushButton_2->setStyleSheet(QLatin1String("background-color:#27282A;\n"
"  border-style: solid;\n"
"  border-color: #FFF;\n"
"  border-width: 1px;"));

        retranslateUi(Login);

        QMetaObject::connectSlotsByName(Login);
    } // setupUi

    void retranslateUi(QDialog *Login)
    {
        Login->setWindowTitle(QApplication::translate("Login", "Dialog", 0));
        label->setText(QApplication::translate("Login", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \320\264\320\260\320\275\320\275\321\213\320\265 \320\276\320\277\320\265\321\200\320\260\321\202\320\276\321\200\320\260", 0));
        label_2->setText(QApplication::translate("Login", "\320\230\320\274\321\217", 0));
        label_3->setText(QApplication::translate("Login", "\320\244\320\260\320\274\320\270\320\273\320\270\321\217", 0));
        label_4->setText(QApplication::translate("Login", "\320\236\321\202\320\264\320\265\320\273", 0));
        pushButton->setText(QApplication::translate("Login", "\320\222\321\205\320\276\320\264", 0));
        pushButton_2->setText(QApplication::translate("Login", "\320\236\321\202\320\274\320\265\320\275\320\260", 0));
    } // retranslateUi

};

namespace Ui {
    class Login: public Ui_Login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
