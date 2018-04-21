/********************************************************************************
** Form generated from reading UI file 'systeminfo.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SYSTEMINFO_H
#define UI_SYSTEMINFO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_SystemInfo
{
public:
    QLabel *label;
    QFrame *frame;
    QLabel *label_2;
    QLabel *cpuName;
    QFrame *frame_2;
    QLabel *gpuName;
    QLabel *label_4;
    QFrame *frame_3;
    QLabel *label_8;
    QLabel *OperMemory;
    QFrame *frame_4;
    QLabel *PCName;
    QLabel *label_5;
    QFrame *frame_5;
    QLabel *OSName;
    QLabel *label_3;
    QFrame *frame_6;
    QLabel *label_6;
    QLabel *label_7;
    QTableWidget *tableWidget;

    void setupUi(QDialog *SystemInfo)
    {
        if (SystemInfo->objectName().isEmpty())
            SystemInfo->setObjectName(QStringLiteral("SystemInfo"));
        SystemInfo->resize(482, 543);
        label = new QLabel(SystemInfo);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(50, 10, 381, 59));
        QFont font;
        font.setPointSize(20);
        label->setFont(font);
        label->setLayoutDirection(Qt::LeftToRight);
        label->setAlignment(Qt::AlignCenter);
        frame = new QFrame(SystemInfo);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setGeometry(QRect(10, 220, 461, 41));
        frame->setFrameShape(QFrame::Box);
        frame->setFrameShadow(QFrame::Sunken);
        frame->setLineWidth(2);
        label_2 = new QLabel(frame);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(10, 10, 61, 20));
        cpuName = new QLabel(frame);
        cpuName->setObjectName(QStringLiteral("cpuName"));
        cpuName->setGeometry(QRect(80, 10, 351, 21));
        frame_2 = new QFrame(SystemInfo);
        frame_2->setObjectName(QStringLiteral("frame_2"));
        frame_2->setGeometry(QRect(10, 270, 461, 41));
        frame_2->setFrameShape(QFrame::Box);
        frame_2->setFrameShadow(QFrame::Sunken);
        frame_2->setLineWidth(2);
        gpuName = new QLabel(frame_2);
        gpuName->setObjectName(QStringLiteral("gpuName"));
        gpuName->setGeometry(QRect(80, 10, 361, 16));
        label_4 = new QLabel(frame_2);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(10, 10, 111, 16));
        frame_3 = new QFrame(SystemInfo);
        frame_3->setObjectName(QStringLiteral("frame_3"));
        frame_3->setGeometry(QRect(10, 320, 461, 41));
        frame_3->setFrameShape(QFrame::Box);
        frame_3->setFrameShadow(QFrame::Sunken);
        frame_3->setLineWidth(2);
        label_8 = new QLabel(frame_3);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(10, 10, 141, 16));
        OperMemory = new QLabel(frame_3);
        OperMemory->setObjectName(QStringLiteral("OperMemory"));
        OperMemory->setGeometry(QRect(130, 10, 321, 16));
        frame_4 = new QFrame(SystemInfo);
        frame_4->setObjectName(QStringLiteral("frame_4"));
        frame_4->setGeometry(QRect(10, 70, 461, 41));
        frame_4->setFrameShape(QFrame::Box);
        frame_4->setFrameShadow(QFrame::Sunken);
        frame_4->setLineWidth(2);
        PCName = new QLabel(frame_4);
        PCName->setObjectName(QStringLiteral("PCName"));
        PCName->setGeometry(QRect(100, 10, 341, 16));
        label_5 = new QLabel(frame_4);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(10, 10, 141, 16));
        frame_5 = new QFrame(SystemInfo);
        frame_5->setObjectName(QStringLiteral("frame_5"));
        frame_5->setGeometry(QRect(10, 120, 461, 41));
        frame_5->setFrameShape(QFrame::Box);
        frame_5->setFrameShadow(QFrame::Sunken);
        frame_5->setLineWidth(2);
        OSName = new QLabel(frame_5);
        OSName->setObjectName(QStringLiteral("OSName"));
        OSName->setGeometry(QRect(140, 10, 311, 16));
        label_3 = new QLabel(frame_5);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(10, 10, 141, 16));
        frame_6 = new QFrame(SystemInfo);
        frame_6->setObjectName(QStringLiteral("frame_6"));
        frame_6->setGeometry(QRect(10, 170, 461, 41));
        frame_6->setFrameShape(QFrame::Box);
        frame_6->setFrameShadow(QFrame::Sunken);
        frame_6->setLineWidth(2);
        label_6 = new QLabel(frame_6);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(10, 10, 141, 16));
        label_7 = new QLabel(frame_6);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(130, 10, 311, 16));
        tableWidget = new QTableWidget(SystemInfo);
        if (tableWidget->columnCount() < 3)
            tableWidget->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        __qtablewidgetitem->setTextAlignment(Qt::AlignCenter);
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        __qtablewidgetitem1->setTextAlignment(Qt::AlignCenter);
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        __qtablewidgetitem2->setTextAlignment(Qt::AlignCenter);
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setGeometry(QRect(10, 400, 461, 131));
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(tableWidget->sizePolicy().hasHeightForWidth());
        tableWidget->setSizePolicy(sizePolicy);
        tableWidget->setMinimumSize(QSize(461, 0));

        retranslateUi(SystemInfo);

        QMetaObject::connectSlotsByName(SystemInfo);
    } // setupUi

    void retranslateUi(QDialog *SystemInfo)
    {
        SystemInfo->setWindowTitle(QApplication::translate("SystemInfo", "Dialog", nullptr));
        label->setText(QApplication::translate("SystemInfo", "\320\230\320\275\321\204\320\276\321\200\320\274\320\260\321\206\320\270\321\217 \320\276 \321\201\320\270\321\201\321\202\320\265\320\274\320\265", nullptr));
        label_2->setText(QApplication::translate("SystemInfo", "\320\237\321\200\320\276\321\206\320\265\321\201c\320\276\321\200:", nullptr));
        cpuName->setText(QApplication::translate("SystemInfo", "TextLabel", nullptr));
        gpuName->setText(QApplication::translate("SystemInfo", "TextLabel", nullptr));
        label_4->setText(QApplication::translate("SystemInfo", "\320\222\320\270\320\264\320\265\320\276\320\272\320\260\321\200\321\202\320\260: ", nullptr));
        label_8->setText(QApplication::translate("SystemInfo", "\320\236\320\277\320\265\321\200\320\260\321\202\320\270\320\262\320\275\320\260\321\217 \320\277\320\260\320\274\321\217\321\202\321\214:", nullptr));
        OperMemory->setText(QApplication::translate("SystemInfo", "TextLabel", nullptr));
        PCName->setText(QApplication::translate("SystemInfo", "TextLabel", nullptr));
        label_5->setText(QApplication::translate("SystemInfo", "\320\230\320\274\321\217 \321\203\321\201\321\202\321\200\320\276\320\271\321\201\321\202\320\262\320\260: ", nullptr));
        OSName->setText(QApplication::translate("SystemInfo", "TextLabel", nullptr));
        label_3->setText(QApplication::translate("SystemInfo", "\320\236\320\277\320\265\321\200\320\260\321\206\320\270\320\276\320\275\320\275\320\260\321\217 \321\201\320\270\321\201\321\202\320\265\320\274\320\260: ", nullptr));
        label_6->setText(QApplication::translate("SystemInfo", "\320\240\320\260\320\267\321\200\321\217\320\264\320\275\320\276\321\202\321\214 \321\201\320\270\321\201\321\202\320\265\320\274\321\213:", nullptr));
        label_7->setText(QApplication::translate("SystemInfo", "TextLabel", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("SystemInfo", "\320\230\320\274\321\217 \321\202\320\276\320\274\320\260", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("SystemInfo", "\320\224\320\276\321\201\321\202\321\203\320\277\320\275\320\276\320\265 \320\274\320\265\321\201\321\202\320\276", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("SystemInfo", "\320\222\321\201\320\265\320\263\320\276 \320\274\320\265\321\201\321\202\320\260", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SystemInfo: public Ui_SystemInfo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SYSTEMINFO_H
