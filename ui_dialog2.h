/********************************************************************************
** Form generated from reading UI file 'dialog2.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG2_H
#define UI_DIALOG2_H

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

class Ui_Dialog2
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *addressLine;
    QLineEdit *portLine;
    QLineEdit *passwordLine;
    QPushButton *setdefPB;
    QPushButton *connectPB;
    QPushButton *cancelPB;
    QLabel *label_4;

    void setupUi(QDialog *Dialog2)
    {
        if (Dialog2->objectName().isEmpty())
            Dialog2->setObjectName(QStringLiteral("Dialog2"));
        Dialog2->resize(311, 300);
        label = new QLabel(Dialog2);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 55, 151, 21));
        QFont font;
        font.setPointSize(12);
        label->setFont(font);
        label_2 = new QLabel(Dialog2);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(10, 116, 47, 20));
        label_2->setFont(font);
        label_3 = new QLabel(Dialog2);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(10, 185, 61, 21));
        label_3->setFont(font);
        addressLine = new QLineEdit(Dialog2);
        addressLine->setObjectName(QStringLiteral("addressLine"));
        addressLine->setGeometry(QRect(10, 80, 291, 20));
        portLine = new QLineEdit(Dialog2);
        portLine->setObjectName(QStringLiteral("portLine"));
        portLine->setGeometry(QRect(10, 140, 113, 20));
        passwordLine = new QLineEdit(Dialog2);
        passwordLine->setObjectName(QStringLiteral("passwordLine"));
        passwordLine->setGeometry(QRect(10, 210, 281, 20));
        setdefPB = new QPushButton(Dialog2);
        setdefPB->setObjectName(QStringLiteral("setdefPB"));
        setdefPB->setGeometry(QRect(10, 260, 101, 23));
        QFont font1;
        font1.setPointSize(10);
        setdefPB->setFont(font1);
        connectPB = new QPushButton(Dialog2);
        connectPB->setObjectName(QStringLiteral("connectPB"));
        connectPB->setGeometry(QRect(114, 260, 101, 23));
        connectPB->setFont(font1);
        cancelPB = new QPushButton(Dialog2);
        cancelPB->setObjectName(QStringLiteral("cancelPB"));
        cancelPB->setGeometry(QRect(220, 260, 91, 23));
        cancelPB->setFont(font1);
        label_4 = new QLabel(Dialog2);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(40, 0, 231, 31));
        QFont font2;
        font2.setPointSize(14);
        label_4->setFont(font2);

        retranslateUi(Dialog2);

        QMetaObject::connectSlotsByName(Dialog2);
    } // setupUi

    void retranslateUi(QDialog *Dialog2)
    {
        Dialog2->setWindowTitle(QApplication::translate("Dialog2", "Dialog", 0));
        label->setText(QApplication::translate("Dialog2", "\320\220\320\264\321\200\320\265\321\201 \321\201\320\265\321\200\320\262\320\265\321\200\320\260", 0));
        label_2->setText(QApplication::translate("Dialog2", "\320\237\320\276\321\200\321\202", 0));
        label_3->setText(QApplication::translate("Dialog2", "\320\237\320\260\321\200\320\276\320\273\321\214", 0));
        setdefPB->setText(QApplication::translate("Dialog2", "\320\237\320\276 \321\203\320\274\320\276\320\273\321\207\320\260\320\275\320\270\321\216", 0));
        connectPB->setText(QApplication::translate("Dialog2", "\320\237\320\276\320\264\320\272\320\273\321\216\321\207\320\270\321\202\321\214\321\201\321\217", 0));
        cancelPB->setText(QApplication::translate("Dialog2", "\320\236\321\202\320\274\320\265\320\275\320\260", 0));
        label_4->setText(QApplication::translate("Dialog2", "\320\237\320\260\321\200\320\260\320\274\320\265\321\202\321\200\321\213 \320\277\320\276\320\264\320\272\320\273\321\216\321\207\320\265\320\275\320\270\321\217", 0));
    } // retranslateUi

};

namespace Ui {
    class Dialog2: public Ui_Dialog2 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG2_H
