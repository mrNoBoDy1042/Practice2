/********************************************************************************
** Form generated from reading UI file 'mainclient.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINCLIENT_H
#define UI_MAINCLIENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainClient
{
public:
    QWidget *centralWidget;
    QHBoxLayout *horizontalLayout_3;
    QFrame *frame;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QLabel *label;
    QLabel *status;
    QLabel *label_2;
    QPushButton *ping;
    QPushButton *reconnectPB;
    QPushButton *configPB;
    QPushButton *launchPB;
    QPushButton *SystemInfoPB;
    QPushButton *exitPB;
    QFrame *frame_2;
    QVBoxLayout *verticalLayout_2;
    QStackedWidget *stackedWidget;
    QWidget *page_2;
    QListWidget *listWidget;
    QWidget *widget;
    QWidget *widget_2;
    QWidget *page_3;
    QLabel *label_4;
    QLabel *label_3;
    QLineEdit *portLine;
    QPushButton *setdefPB;
    QLabel *label_5;
    QLineEdit *addressLine;
    QLineEdit *passwordLine;
    QPushButton *connectPB;
    QLabel *label_6;
    QWidget *page_4;
    QTableWidget *tableWidget;
    QFrame *frame_4;
    QLabel *PCName;
    QLabel *label_7;
    QFrame *frame_3;
    QLabel *gpuName;
    QLabel *label_8;
    QFrame *frame_6;
    QLabel *label_9;
    QLabel *label_10;
    QFrame *frame_5;
    QLabel *label_11;
    QLabel *OperMemory;
    QFrame *frame_7;
    QLabel *label_13;
    QLabel *cpuName;
    QFrame *frame_8;
    QLabel *OSName;
    QLabel *label_14;
    QWidget *widget_3;
    QWidget *widget_4;
    QWidget *page_5;
    QListWidget *listWidget_2;
    QListWidget *listWidget_3;
    QListWidget *listWidget_4;
    QWidget *page;
    QPushButton *pushButton;
    QTableWidget *tableWidget_2;
    QPushButton *pushButton_2;

    void setupUi(QMainWindow *MainClient)
    {
        if (MainClient->objectName().isEmpty())
            MainClient->setObjectName(QStringLiteral("MainClient"));
        MainClient->resize(1056, 490);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainClient->sizePolicy().hasHeightForWidth());
        MainClient->setSizePolicy(sizePolicy);
        MainClient->setStyleSheet(QStringLiteral("background-color:#2B2B2B; color:#FFF; font-family:Verdana "));
        centralWidget = new QWidget(MainClient);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        horizontalLayout_3 = new QHBoxLayout(centralWidget);
        horizontalLayout_3->setSpacing(10);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        frame = new QFrame(centralWidget);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setStyleSheet(QStringLiteral("background-color:#242424"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        horizontalLayout_2 = new QHBoxLayout(frame);
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(10, 10, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        label = new QLabel(frame);
        label->setObjectName(QStringLiteral("label"));
        label->setMaximumSize(QSize(16777215, 1555000));
        label->setStyleSheet(QStringLiteral("border-width:0"));

        horizontalLayout->addWidget(label);

        status = new QLabel(frame);
        status->setObjectName(QStringLiteral("status"));
        status->setEnabled(true);
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(2);
        sizePolicy1.setHeightForWidth(status->sizePolicy().hasHeightForWidth());
        status->setSizePolicy(sizePolicy1);
        status->setMinimumSize(QSize(200, 0));
        status->setMaximumSize(QSize(16777215, 15560000));
        status->setStyleSheet(QStringLiteral("border-width:0"));

        horizontalLayout->addWidget(status);


        verticalLayout->addLayout(horizontalLayout);

        label_2 = new QLabel(frame);
        label_2->setObjectName(QStringLiteral("label_2"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy2);
        label_2->setMinimumSize(QSize(0, 25));
        label_2->setMaximumSize(QSize(16777215, 16777215));
        label_2->setStyleSheet(QStringLiteral("border-width:0"));

        verticalLayout->addWidget(label_2);

        ping = new QPushButton(frame);
        ping->setObjectName(QStringLiteral("ping"));
        QSizePolicy sizePolicy3(QSizePolicy::Minimum, QSizePolicy::Expanding);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(2);
        sizePolicy3.setHeightForWidth(ping->sizePolicy().hasHeightForWidth());
        ping->setSizePolicy(sizePolicy3);
        ping->setMinimumSize(QSize(0, 60));
        QFont font;
        font.setFamily(QStringLiteral("Verdana"));
        ping->setFont(font);
        ping->setFocusPolicy(Qt::NoFocus);
        ping->setStyleSheet(QStringLiteral(""));
        ping->setFlat(true);

        verticalLayout->addWidget(ping);

        reconnectPB = new QPushButton(frame);
        reconnectPB->setObjectName(QStringLiteral("reconnectPB"));
        sizePolicy3.setHeightForWidth(reconnectPB->sizePolicy().hasHeightForWidth());
        reconnectPB->setSizePolicy(sizePolicy3);
        reconnectPB->setMinimumSize(QSize(0, 60));
        reconnectPB->setFont(font);
        reconnectPB->setStyleSheet(QLatin1String("background-color:#242424;\n"
"border-style: solid;\n"
"border-color: #FFF;\n"
"border-width: 1px;\n"
"padding:0px;\n"
"margin:0px;"));
        reconnectPB->setFlat(false);

        verticalLayout->addWidget(reconnectPB);

        configPB = new QPushButton(frame);
        configPB->setObjectName(QStringLiteral("configPB"));
        sizePolicy3.setHeightForWidth(configPB->sizePolicy().hasHeightForWidth());
        configPB->setSizePolicy(sizePolicy3);
        configPB->setMinimumSize(QSize(0, 60));
        configPB->setFont(font);
        configPB->setStyleSheet(QLatin1String("background-color:#242424;\n"
"border-style: solid;\n"
"border-color: #FFF;\n"
"border-width: 1px;\n"
"padding:0px;\n"
"margin:0px;"));
        configPB->setFlat(false);

        verticalLayout->addWidget(configPB);

        launchPB = new QPushButton(frame);
        launchPB->setObjectName(QStringLiteral("launchPB"));
        sizePolicy3.setHeightForWidth(launchPB->sizePolicy().hasHeightForWidth());
        launchPB->setSizePolicy(sizePolicy3);
        launchPB->setMinimumSize(QSize(0, 60));
        launchPB->setFont(font);
        launchPB->setStyleSheet(QLatin1String("background-color:#242424;\n"
"border-style: solid;\n"
"border-color: #FFF;\n"
"border-width: 1px;\n"
"padding:0px;\n"
"margin:0px;"));
        launchPB->setFlat(false);

        verticalLayout->addWidget(launchPB);

        SystemInfoPB = new QPushButton(frame);
        SystemInfoPB->setObjectName(QStringLiteral("SystemInfoPB"));
        sizePolicy3.setHeightForWidth(SystemInfoPB->sizePolicy().hasHeightForWidth());
        SystemInfoPB->setSizePolicy(sizePolicy3);
        SystemInfoPB->setMinimumSize(QSize(0, 60));
        SystemInfoPB->setFont(font);
        SystemInfoPB->setAcceptDrops(false);
        SystemInfoPB->setStyleSheet(QLatin1String("background-color:#242424;\n"
"border-style: solid;\n"
"border-color: #FFF;\n"
"border-width: 1px;\n"
"padding:0px;\n"
"margin:0px;"));
        SystemInfoPB->setFlat(false);

        verticalLayout->addWidget(SystemInfoPB);

        exitPB = new QPushButton(frame);
        exitPB->setObjectName(QStringLiteral("exitPB"));
        sizePolicy3.setHeightForWidth(exitPB->sizePolicy().hasHeightForWidth());
        exitPB->setSizePolicy(sizePolicy3);
        exitPB->setMinimumSize(QSize(0, 60));
        exitPB->setFont(font);
        exitPB->setStyleSheet(QLatin1String("background-color:#242424;\n"
"border-style: solid;\n"
"border-color: #FFF;\n"
"border-width: 1px;\n"
"padding:0px;\n"
"margin:0px;"));
        exitPB->setFlat(false);

        verticalLayout->addWidget(exitPB);

        verticalLayout->setStretch(0, 1);
        verticalLayout->setStretch(1, 1);
        verticalLayout->setStretch(2, 1);
        verticalLayout->setStretch(3, 1);
        verticalLayout->setStretch(4, 1);
        verticalLayout->setStretch(5, 1);
        verticalLayout->setStretch(6, 1);
        verticalLayout->setStretch(7, 1);

        horizontalLayout_2->addLayout(verticalLayout);


        horizontalLayout_3->addWidget(frame);

        frame_2 = new QFrame(centralWidget);
        frame_2->setObjectName(QStringLiteral("frame_2"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        verticalLayout_2 = new QVBoxLayout(frame_2);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        stackedWidget = new QStackedWidget(frame_2);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        stackedWidget->setMinimumSize(QSize(600, 320));
        stackedWidget->setStyleSheet(QStringLiteral(""));
        page_2 = new QWidget();
        page_2->setObjectName(QStringLiteral("page_2"));
        listWidget = new QListWidget(page_2);
        listWidget->setObjectName(QStringLiteral("listWidget"));
        listWidget->setGeometry(QRect(310, 320, 371, 151));
        sizePolicy.setHeightForWidth(listWidget->sizePolicy().hasHeightForWidth());
        listWidget->setSizePolicy(sizePolicy);
        widget = new QWidget(page_2);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(0, 10, 671, 291));
        widget_2 = new QWidget(page_2);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        widget_2->setGeometry(QRect(0, 320, 291, 151));
        stackedWidget->addWidget(page_2);
        page_3 = new QWidget();
        page_3->setObjectName(QStringLiteral("page_3"));
        label_4 = new QLabel(page_3);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(240, 10, 231, 31));
        label_4->setFont(font);
        label_3 = new QLabel(page_3);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(20, 70, 151, 21));
        label_3->setFont(font);
        portLine = new QLineEdit(page_3);
        portLine->setObjectName(QStringLiteral("portLine"));
        portLine->setGeometry(QRect(20, 190, 113, 20));
        setdefPB = new QPushButton(page_3);
        setdefPB->setObjectName(QStringLiteral("setdefPB"));
        setdefPB->setGeometry(QRect(410, 420, 101, 23));
        setdefPB->setFont(font);
        label_5 = new QLabel(page_3);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(20, 250, 61, 21));
        label_5->setFont(font);
        addressLine = new QLineEdit(page_3);
        addressLine->setObjectName(QStringLiteral("addressLine"));
        addressLine->setGeometry(QRect(20, 100, 291, 20));
        passwordLine = new QLineEdit(page_3);
        passwordLine->setObjectName(QStringLiteral("passwordLine"));
        passwordLine->setGeometry(QRect(20, 290, 281, 20));
        connectPB = new QPushButton(page_3);
        connectPB->setObjectName(QStringLiteral("connectPB"));
        connectPB->setGeometry(QRect(520, 420, 101, 23));
        connectPB->setFont(font);
        label_6 = new QLabel(page_3);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(20, 160, 47, 20));
        label_6->setFont(font);
        stackedWidget->addWidget(page_3);
        page_4 = new QWidget();
        page_4->setObjectName(QStringLiteral("page_4"));
        tableWidget = new QTableWidget(page_4);
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
        tableWidget->setGeometry(QRect(0, 330, 301, 151));
        QSizePolicy sizePolicy4(QSizePolicy::Maximum, QSizePolicy::Expanding);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(tableWidget->sizePolicy().hasHeightForWidth());
        tableWidget->setSizePolicy(sizePolicy4);
        tableWidget->setMinimumSize(QSize(300, 0));
        tableWidget->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        tableWidget->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        frame_4 = new QFrame(page_4);
        frame_4->setObjectName(QStringLiteral("frame_4"));
        frame_4->setGeometry(QRect(320, 10, 361, 61));
        frame_4->setFrameShape(QFrame::Box);
        frame_4->setFrameShadow(QFrame::Sunken);
        frame_4->setLineWidth(2);
        PCName = new QLabel(frame_4);
        PCName->setObjectName(QStringLiteral("PCName"));
        PCName->setGeometry(QRect(120, 20, 341, 16));
        label_7 = new QLabel(frame_4);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(10, 20, 101, 16));
        frame_3 = new QFrame(page_4);
        frame_3->setObjectName(QStringLiteral("frame_3"));
        frame_3->setGeometry(QRect(320, 290, 361, 61));
        frame_3->setFrameShape(QFrame::Box);
        frame_3->setFrameShadow(QFrame::Sunken);
        frame_3->setLineWidth(2);
        gpuName = new QLabel(frame_3);
        gpuName->setObjectName(QStringLiteral("gpuName"));
        gpuName->setGeometry(QRect(100, 20, 361, 16));
        label_8 = new QLabel(frame_3);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(10, 20, 81, 16));
        frame_6 = new QFrame(page_4);
        frame_6->setObjectName(QStringLiteral("frame_6"));
        frame_6->setGeometry(QRect(320, 150, 361, 61));
        frame_6->setFrameShape(QFrame::Box);
        frame_6->setFrameShadow(QFrame::Sunken);
        frame_6->setLineWidth(2);
        label_9 = new QLabel(frame_6);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(10, 20, 131, 16));
        label_10 = new QLabel(frame_6);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(140, 20, 311, 16));
        frame_5 = new QFrame(page_4);
        frame_5->setObjectName(QStringLiteral("frame_5"));
        frame_5->setGeometry(QRect(320, 360, 361, 61));
        frame_5->setFrameShape(QFrame::Box);
        frame_5->setFrameShadow(QFrame::Sunken);
        frame_5->setLineWidth(2);
        label_11 = new QLabel(frame_5);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(10, 20, 141, 16));
        OperMemory = new QLabel(frame_5);
        OperMemory->setObjectName(QStringLiteral("OperMemory"));
        OperMemory->setGeometry(QRect(150, 20, 321, 16));
        frame_7 = new QFrame(page_4);
        frame_7->setObjectName(QStringLiteral("frame_7"));
        frame_7->setGeometry(QRect(320, 220, 361, 61));
        frame_7->setFrameShape(QFrame::Box);
        frame_7->setFrameShadow(QFrame::Sunken);
        frame_7->setLineWidth(2);
        label_13 = new QLabel(frame_7);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setGeometry(QRect(10, 20, 71, 20));
        cpuName = new QLabel(frame_7);
        cpuName->setObjectName(QStringLiteral("cpuName"));
        cpuName->setGeometry(QRect(90, 20, 351, 21));
        frame_8 = new QFrame(page_4);
        frame_8->setObjectName(QStringLiteral("frame_8"));
        frame_8->setGeometry(QRect(320, 80, 361, 61));
        frame_8->setFrameShape(QFrame::Box);
        frame_8->setFrameShadow(QFrame::Sunken);
        frame_8->setLineWidth(2);
        OSName = new QLabel(frame_8);
        OSName->setObjectName(QStringLiteral("OSName"));
        OSName->setGeometry(QRect(170, 20, 311, 16));
        label_14 = new QLabel(frame_8);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setGeometry(QRect(10, 20, 151, 16));
        widget_3 = new QWidget(page_4);
        widget_3->setObjectName(QStringLiteral("widget_3"));
        widget_3->setGeometry(QRect(0, 10, 301, 141));
        widget_4 = new QWidget(page_4);
        widget_4->setObjectName(QStringLiteral("widget_4"));
        widget_4->setGeometry(QRect(0, 170, 301, 141));
        stackedWidget->addWidget(page_4);
        page_5 = new QWidget();
        page_5->setObjectName(QStringLiteral("page_5"));
        listWidget_2 = new QListWidget(page_5);
        listWidget_2->setObjectName(QStringLiteral("listWidget_2"));
        listWidget_2->setGeometry(QRect(0, 10, 351, 231));
        listWidget_3 = new QListWidget(page_5);
        listWidget_3->setObjectName(QStringLiteral("listWidget_3"));
        listWidget_3->setGeometry(QRect(0, 250, 351, 231));
        listWidget_4 = new QListWidget(page_5);
        listWidget_4->setObjectName(QStringLiteral("listWidget_4"));
        listWidget_4->setGeometry(QRect(360, 10, 321, 471));
        stackedWidget->addWidget(page_5);
        page = new QWidget();
        page->setObjectName(QStringLiteral("page"));
        pushButton = new QPushButton(page);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(50, 357, 541, 41));
        tableWidget_2 = new QTableWidget(page);
        tableWidget_2->setObjectName(QStringLiteral("tableWidget_2"));
        tableWidget_2->setGeometry(QRect(50, 10, 541, 341));
        pushButton_2 = new QPushButton(page);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(50, 410, 541, 41));
        stackedWidget->addWidget(page);

        verticalLayout_2->addWidget(stackedWidget);


        horizontalLayout_3->addWidget(frame_2);

        MainClient->setCentralWidget(centralWidget);

        retranslateUi(MainClient);

        stackedWidget->setCurrentIndex(4);


        QMetaObject::connectSlotsByName(MainClient);
    } // setupUi

    void retranslateUi(QMainWindow *MainClient)
    {
        MainClient->setWindowTitle(QApplication::translate("MainClient", "MainClient", 0));
        label->setText(QApplication::translate("MainClient", "\320\241\320\276\321\201\321\202\320\276\321\217\320\275\320\270\320\265 \321\201\320\276\320\265\320\264\320\270\320\275\320\265\320\275\320\270\321\217: ", 0));
        status->setText(QApplication::translate("MainClient", "\320\275\320\265 \320\277\320\276\320\264\320\272\320\273\321\216\321\207\320\265\320\275\320\276", 0));
        label_2->setText(QApplication::translate("MainClient", "TextLabel", 0));
        ping->setText(QApplication::translate("MainClient", "\320\223\320\273\320\260\320\262\320\275\320\260\321\217 \321\201\321\202\321\200\320\260\320\275\320\270\321\206\320\260", 0));
        reconnectPB->setText(QApplication::translate("MainClient", "\320\237\320\265\321\200\320\265\320\277\320\276\320\264\320\272\320\273\321\216\321\207\320\270\321\202\321\214\321\201\321\217", 0));
        configPB->setText(QApplication::translate("MainClient", "\320\230\320\267\320\274\320\265\320\275\320\270\321\202\321\214 \320\264\320\260\320\275\320\275\321\213\320\265 \320\277\320\276\320\264\320\272\320\273\321\216\321\207\320\265\320\275\320\270\321\217", 0));
        launchPB->setText(QApplication::translate("MainClient", "\320\237\321\200\320\276\321\206\320\265\321\201\321\201\321\213", 0));
        SystemInfoPB->setText(QApplication::translate("MainClient", "\320\245\320\260\321\200\320\260\320\272\321\202\320\265\321\200\320\270\321\201\321\202\320\270\320\272\320\260 \320\272\320\276\320\274\320\277\321\214\321\216\321\202\320\265\321\200\320\260", 0));
        exitPB->setText(QApplication::translate("MainClient", "\320\222\321\213\320\271\321\202\320\270", 0));
        label_4->setText(QApplication::translate("MainClient", "\320\237\320\260\321\200\320\260\320\274\320\265\321\202\321\200\321\213 \320\277\320\276\320\264\320\272\320\273\321\216\321\207\320\265\320\275\320\270\321\217", 0));
        label_3->setText(QApplication::translate("MainClient", "\320\220\320\264\321\200\320\265\321\201 \321\201\320\265\321\200\320\262\320\265\321\200\320\260", 0));
        setdefPB->setText(QApplication::translate("MainClient", "\320\237\320\276 \321\203\320\274\320\276\320\273\321\207\320\260\320\275\320\270\321\216", 0));
        label_5->setText(QApplication::translate("MainClient", "\320\237\320\260\321\200\320\276\320\273\321\214", 0));
        connectPB->setText(QApplication::translate("MainClient", "\320\237\320\276\320\264\320\272\320\273\321\216\321\207\320\270\321\202\321\214\321\201\321\217", 0));
        label_6->setText(QApplication::translate("MainClient", "\320\237\320\276\321\200\321\202", 0));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("MainClient", "\320\230\320\274\321\217 \321\202\320\276\320\274\320\260", 0));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("MainClient", "\320\224\320\276\321\201\321\202\321\203\320\277\320\275\320\276\320\265 \320\274\320\265\321\201\321\202\320\276", 0));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("MainClient", "\320\222\321\201\320\265\320\263\320\276 \320\274\320\265\321\201\321\202\320\260", 0));
        PCName->setText(QApplication::translate("MainClient", "TextLabel", 0));
        label_7->setText(QApplication::translate("MainClient", "\320\230\320\274\321\217 \321\203\321\201\321\202\321\200\320\276\320\271\321\201\321\202\320\262\320\260: ", 0));
        gpuName->setText(QApplication::translate("MainClient", "TextLabel", 0));
        label_8->setText(QApplication::translate("MainClient", "\320\222\320\270\320\264\320\265\320\276\320\272\320\260\321\200\321\202\320\260: ", 0));
        label_9->setText(QApplication::translate("MainClient", "\320\240\320\260\320\267\321\200\321\217\320\264\320\275\320\276\321\202\321\214 \321\201\320\270\321\201\321\202\320\265\320\274\321\213:", 0));
        label_10->setText(QApplication::translate("MainClient", "TextLabel", 0));
        label_11->setText(QApplication::translate("MainClient", "\320\236\320\277\320\265\321\200\320\260\321\202\320\270\320\262\320\275\320\260\321\217 \320\277\320\260\320\274\321\217\321\202\321\214:", 0));
        OperMemory->setText(QApplication::translate("MainClient", "TextLabel", 0));
        label_13->setText(QApplication::translate("MainClient", "\320\237\321\200\320\276\321\206\320\265\321\201c\320\276\321\200:", 0));
        cpuName->setText(QApplication::translate("MainClient", "TextLabel", 0));
        OSName->setText(QApplication::translate("MainClient", "TextLabel", 0));
        label_14->setText(QApplication::translate("MainClient", "\320\236\320\277\320\265\321\200\320\260\321\206\320\270\320\276\320\275\320\275\320\260\321\217 \321\201\320\270\321\201\321\202\320\265\320\274\320\260: ", 0));
        pushButton->setText(QApplication::translate("MainClient", "\320\227\320\260\320\277\321\203\321\201\321\202\320\270\321\202\321\214 \320\264\320\270\321\201\320\277\320\265\321\202\321\207\320\265\321\200 \320\267\320\260\320\264\320\260\321\207", 0));
        pushButton_2->setText(QApplication::translate("MainClient", "\320\227\320\260\320\277\321\203\321\201\321\202\320\270\321\202\321\214 \320\277\321\200\320\276\321\206\320\265\321\201\321\201", 0));
    } // retranslateUi

};

namespace Ui {
    class MainClient: public Ui_MainClient {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINCLIENT_H
