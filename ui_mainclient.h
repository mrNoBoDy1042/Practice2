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
    QPushButton *ping;
    QPushButton *reconnectPB;
    QPushButton *configPB;
    QPushButton *launchPB;
    QPushButton *exitPB;
    QFrame *frame_2;
    QVBoxLayout *verticalLayout_2;
    QStackedWidget *stackedWidget;
    QWidget *page_2;
    QListWidget *listWidget;
    QFrame *frame_4;
    QLabel *PCName_2;
    QLabel *label_12;
    QFrame *frame_3;
    QLabel *gpuName_2;
    QLabel *label_15;
    QFrame *frame_7;
    QLabel *label_16;
    QLabel *cpuName_2;
    QFrame *frame_8;
    QLabel *OSName_2;
    QLabel *label_17;
    QFrame *frame_6;
    QLabel *label_18;
    QLabel *label_19;
    QFrame *frame_5;
    QLabel *label_20;
    QLabel *cpuUsage;
    QFrame *frame_9;
    QLabel *label_21;
    QLabel *gpuUsage;
    QLabel *label_22;
    QLabel *label_23;
    QLabel *label_24;
    QTableWidget *tableWidget_2;
    QLabel *label_2;
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
    QWidget *page_5;
    QListWidget *listWidget_2;
    QListWidget *listWidget_3;
    QListWidget *listWidget_4;
    QWidget *page;
    QPushButton *pushButton_2;
    QLabel *label_25;
    QTableWidget *tableWidget;

    void setupUi(QMainWindow *MainClient)
    {
        if (MainClient->objectName().isEmpty())
            MainClient->setObjectName(QStringLiteral("MainClient"));
        MainClient->resize(1050, 560);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainClient->sizePolicy().hasHeightForWidth());
        MainClient->setSizePolicy(sizePolicy);
        MainClient->setMinimumSize(QSize(1050, 560));
        MainClient->setMaximumSize(QSize(1050, 560));
        MainClient->setStyleSheet(QStringLiteral("background-color:#2B2B2B; color:#FFF; font-family:Verdana "));
        centralWidget = new QWidget(MainClient);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(centralWidget->sizePolicy().hasHeightForWidth());
        centralWidget->setSizePolicy(sizePolicy1);
        horizontalLayout_3 = new QHBoxLayout(centralWidget);
        horizontalLayout_3->setSpacing(10);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        frame = new QFrame(centralWidget);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setMaximumSize(QSize(300, 16777215));
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
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(2);
        sizePolicy2.setHeightForWidth(status->sizePolicy().hasHeightForWidth());
        status->setSizePolicy(sizePolicy2);
        status->setMinimumSize(QSize(200, 0));
        status->setMaximumSize(QSize(16777215, 15560000));
        status->setStyleSheet(QStringLiteral("border-width:0"));

        horizontalLayout->addWidget(status);


        verticalLayout->addLayout(horizontalLayout);

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
        font.setPointSize(8);
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
        stackedWidget->setStyleSheet(QStringLiteral(""));
        page_2 = new QWidget();
        page_2->setObjectName(QStringLiteral("page_2"));
        listWidget = new QListWidget(page_2);
        listWidget->setObjectName(QStringLiteral("listWidget"));
        listWidget->setGeometry(QRect(350, 440, 371, 101));
        sizePolicy.setHeightForWidth(listWidget->sizePolicy().hasHeightForWidth());
        listWidget->setSizePolicy(sizePolicy);
        frame_4 = new QFrame(page_2);
        frame_4->setObjectName(QStringLiteral("frame_4"));
        frame_4->setGeometry(QRect(10, 50, 711, 41));
        frame_4->setFrameShape(QFrame::Box);
        frame_4->setFrameShadow(QFrame::Sunken);
        frame_4->setLineWidth(2);
        PCName_2 = new QLabel(frame_4);
        PCName_2->setObjectName(QStringLiteral("PCName_2"));
        PCName_2->setGeometry(QRect(120, 10, 581, 16));
        label_12 = new QLabel(frame_4);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(10, 10, 101, 16));
        frame_3 = new QFrame(page_2);
        frame_3->setObjectName(QStringLiteral("frame_3"));
        frame_3->setGeometry(QRect(10, 250, 711, 41));
        frame_3->setFrameShape(QFrame::Box);
        frame_3->setFrameShadow(QFrame::Sunken);
        frame_3->setLineWidth(2);
        gpuName_2 = new QLabel(frame_3);
        gpuName_2->setObjectName(QStringLiteral("gpuName_2"));
        gpuName_2->setGeometry(QRect(100, 10, 601, 16));
        label_15 = new QLabel(frame_3);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setGeometry(QRect(10, 10, 81, 16));
        frame_7 = new QFrame(page_2);
        frame_7->setObjectName(QStringLiteral("frame_7"));
        frame_7->setGeometry(QRect(10, 200, 711, 41));
        frame_7->setFrameShape(QFrame::Box);
        frame_7->setFrameShadow(QFrame::Sunken);
        frame_7->setLineWidth(2);
        label_16 = new QLabel(frame_7);
        label_16->setObjectName(QStringLiteral("label_16"));
        label_16->setGeometry(QRect(10, 10, 71, 20));
        cpuName_2 = new QLabel(frame_7);
        cpuName_2->setObjectName(QStringLiteral("cpuName_2"));
        cpuName_2->setGeometry(QRect(90, 10, 611, 21));
        frame_8 = new QFrame(page_2);
        frame_8->setObjectName(QStringLiteral("frame_8"));
        frame_8->setGeometry(QRect(10, 100, 711, 41));
        frame_8->setFrameShape(QFrame::Box);
        frame_8->setFrameShadow(QFrame::Sunken);
        frame_8->setLineWidth(2);
        OSName_2 = new QLabel(frame_8);
        OSName_2->setObjectName(QStringLiteral("OSName_2"));
        OSName_2->setGeometry(QRect(170, 10, 531, 16));
        label_17 = new QLabel(frame_8);
        label_17->setObjectName(QStringLiteral("label_17"));
        label_17->setGeometry(QRect(10, 10, 151, 16));
        frame_6 = new QFrame(page_2);
        frame_6->setObjectName(QStringLiteral("frame_6"));
        frame_6->setGeometry(QRect(10, 150, 711, 41));
        frame_6->setFrameShape(QFrame::Box);
        frame_6->setFrameShadow(QFrame::Sunken);
        frame_6->setLineWidth(2);
        label_18 = new QLabel(frame_6);
        label_18->setObjectName(QStringLiteral("label_18"));
        label_18->setGeometry(QRect(10, 10, 131, 16));
        label_19 = new QLabel(frame_6);
        label_19->setObjectName(QStringLiteral("label_19"));
        label_19->setGeometry(QRect(140, 10, 561, 16));
        frame_5 = new QFrame(page_2);
        frame_5->setObjectName(QStringLiteral("frame_5"));
        frame_5->setGeometry(QRect(10, 300, 711, 41));
        frame_5->setFrameShape(QFrame::Box);
        frame_5->setFrameShadow(QFrame::Sunken);
        frame_5->setLineWidth(2);
        label_20 = new QLabel(frame_5);
        label_20->setObjectName(QStringLiteral("label_20"));
        label_20->setGeometry(QRect(10, 10, 171, 16));
        cpuUsage = new QLabel(frame_5);
        cpuUsage->setObjectName(QStringLiteral("cpuUsage"));
        cpuUsage->setGeometry(QRect(180, 10, 521, 16));
        frame_9 = new QFrame(page_2);
        frame_9->setObjectName(QStringLiteral("frame_9"));
        frame_9->setGeometry(QRect(10, 350, 711, 41));
        frame_9->setFrameShape(QFrame::Box);
        frame_9->setFrameShadow(QFrame::Sunken);
        frame_9->setLineWidth(2);
        label_21 = new QLabel(frame_9);
        label_21->setObjectName(QStringLiteral("label_21"));
        label_21->setGeometry(QRect(10, 10, 171, 16));
        gpuUsage = new QLabel(frame_9);
        gpuUsage->setObjectName(QStringLiteral("gpuUsage"));
        gpuUsage->setGeometry(QRect(180, 10, 511, 16));
        label_22 = new QLabel(page_2);
        label_22->setObjectName(QStringLiteral("label_22"));
        label_22->setGeometry(QRect(10, 20, 711, 21));
        label_23 = new QLabel(page_2);
        label_23->setObjectName(QStringLiteral("label_23"));
        label_23->setGeometry(QRect(10, 410, 321, 21));
        label_24 = new QLabel(page_2);
        label_24->setObjectName(QStringLiteral("label_24"));
        label_24->setGeometry(QRect(350, 410, 371, 21));
        tableWidget_2 = new QTableWidget(page_2);
        tableWidget_2->setObjectName(QStringLiteral("tableWidget_2"));
        tableWidget_2->setGeometry(QRect(10, 440, 321, 101));
        label_2 = new QLabel(page_2);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(300, 410, 47, 13));
        stackedWidget->addWidget(page_2);
        page_3 = new QWidget();
        page_3->setObjectName(QStringLiteral("page_3"));
        label_4 = new QLabel(page_3);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(240, 10, 231, 31));
        QFont font1;
        font1.setFamily(QStringLiteral("Verdana"));
        label_4->setFont(font1);
        label_3 = new QLabel(page_3);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(20, 70, 151, 21));
        label_3->setFont(font1);
        portLine = new QLineEdit(page_3);
        portLine->setObjectName(QStringLiteral("portLine"));
        portLine->setGeometry(QRect(20, 190, 113, 20));
        setdefPB = new QPushButton(page_3);
        setdefPB->setObjectName(QStringLiteral("setdefPB"));
        setdefPB->setGeometry(QRect(410, 420, 101, 23));
        setdefPB->setFont(font1);
        label_5 = new QLabel(page_3);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(20, 250, 61, 21));
        label_5->setFont(font1);
        addressLine = new QLineEdit(page_3);
        addressLine->setObjectName(QStringLiteral("addressLine"));
        addressLine->setGeometry(QRect(20, 100, 291, 20));
        passwordLine = new QLineEdit(page_3);
        passwordLine->setObjectName(QStringLiteral("passwordLine"));
        passwordLine->setGeometry(QRect(20, 290, 281, 20));
        connectPB = new QPushButton(page_3);
        connectPB->setObjectName(QStringLiteral("connectPB"));
        connectPB->setGeometry(QRect(520, 420, 101, 23));
        connectPB->setFont(font1);
        label_6 = new QLabel(page_3);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(20, 160, 47, 20));
        label_6->setFont(font1);
        stackedWidget->addWidget(page_3);
        page_4 = new QWidget();
        page_4->setObjectName(QStringLiteral("page_4"));
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
        pushButton_2 = new QPushButton(page);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(90, 470, 541, 41));
        label_25 = new QLabel(page);
        label_25->setObjectName(QStringLiteral("label_25"));
        label_25->setGeometry(QRect(10, 20, 701, 21));
        tableWidget = new QTableWidget(page);
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
        tableWidget->setGeometry(QRect(0, 50, 721, 401));
        QSizePolicy sizePolicy4(QSizePolicy::Maximum, QSizePolicy::Expanding);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(tableWidget->sizePolicy().hasHeightForWidth());
        tableWidget->setSizePolicy(sizePolicy4);
        tableWidget->setMinimumSize(QSize(300, 0));
        tableWidget->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        tableWidget->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        stackedWidget->addWidget(page);

        verticalLayout_2->addWidget(stackedWidget);


        horizontalLayout_3->addWidget(frame_2);

        MainClient->setCentralWidget(centralWidget);

        retranslateUi(MainClient);

        stackedWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainClient);
    } // setupUi

    void retranslateUi(QMainWindow *MainClient)
    {
        MainClient->setWindowTitle(QApplication::translate("MainClient", "MainClient", 0));
        label->setText(QApplication::translate("MainClient", "\320\241\320\276\321\201\321\202\320\276\321\217\320\275\320\270\320\265 \321\201\320\276\320\265\320\264\320\270\320\275\320\265\320\275\320\270\321\217: ", 0));
        status->setText(QApplication::translate("MainClient", "\320\275\320\265 \320\277\320\276\320\264\320\272\320\273\321\216\321\207\320\265\320\275\320\276", 0));
        ping->setText(QApplication::translate("MainClient", "\320\223\320\273\320\260\320\262\320\275\320\260\321\217 \321\201\321\202\321\200\320\260\320\275\320\270\321\206\320\260", 0));
        reconnectPB->setText(QApplication::translate("MainClient", "\320\237\320\265\321\200\320\265\320\277\320\276\320\264\320\272\320\273\321\216\321\207\320\270\321\202\321\214\321\201\321\217", 0));
        configPB->setText(QApplication::translate("MainClient", "\320\230\320\267\320\274\320\265\320\275\320\270\321\202\321\214 \320\264\320\260\320\275\320\275\321\213\320\265 \320\277\320\276\320\264\320\272\320\273\321\216\321\207\320\265\320\275\320\270\321\217", 0));
        launchPB->setText(QApplication::translate("MainClient", "\320\237\321\200\320\276\321\206\320\265\321\201\321\201\321\213", 0));
        exitPB->setText(QApplication::translate("MainClient", "\320\222\321\213\320\271\321\202\320\270", 0));
        PCName_2->setText(QApplication::translate("MainClient", "TextLabel", 0));
        label_12->setText(QApplication::translate("MainClient", "\320\230\320\274\321\217 \321\203\321\201\321\202\321\200\320\276\320\271\321\201\321\202\320\262\320\260: ", 0));
        gpuName_2->setText(QApplication::translate("MainClient", "TextLabel", 0));
        label_15->setText(QApplication::translate("MainClient", "\320\222\320\270\320\264\320\265\320\276\320\272\320\260\321\200\321\202\320\260: ", 0));
        label_16->setText(QApplication::translate("MainClient", "\320\237\321\200\320\276\321\206\320\265\321\201c\320\276\321\200:", 0));
        cpuName_2->setText(QApplication::translate("MainClient", "TextLabel", 0));
        OSName_2->setText(QApplication::translate("MainClient", "TextLabel", 0));
        label_17->setText(QApplication::translate("MainClient", "\320\236\320\277\320\265\321\200\320\260\321\206\320\270\320\276\320\275\320\275\320\260\321\217 \321\201\320\270\321\201\321\202\320\265\320\274\320\260: ", 0));
        label_18->setText(QApplication::translate("MainClient", "\320\240\320\260\320\267\321\200\321\217\320\264\320\275\320\276\321\202\321\214 \321\201\320\270\321\201\321\202\320\265\320\274\321\213:", 0));
        label_19->setText(QApplication::translate("MainClient", "TextLabel", 0));
        label_20->setText(QApplication::translate("MainClient", "<html><head/><body><p>\320\227\320\260\320\263\321\200\321\203\320\266\320\265\320\275\320\275\320\276\321\201\321\202\321\214 \320\277\321\200\320\276\321\206\320\265\321\201\321\201\320\276\321\200\320\260:</p></body></html>", 0));
        cpuUsage->setText(QApplication::translate("MainClient", "<html><head/><body><p>\320\241\320\261\320\276\321\200 \320\270\320\275\321\204\320\276\321\200\320\274\320\260\321\206\320\270\320\270</p></body></html>", 0));
        label_21->setText(QApplication::translate("MainClient", "<html><head/><body><p>\320\227\320\260\320\263\321\200\321\203\320\266\320\265\320\275\320\275\320\276\321\201\321\202\321\214 \320\262\320\270\320\264\320\265\320\276\320\272\320\260\321\200\321\202\321\213:</p></body></html>", 0));
        gpuUsage->setText(QApplication::translate("MainClient", "\320\241\320\261\320\276\321\200 \320\270\320\275\321\204\320\276\321\200\320\274\320\260\321\206\320\270\320\270", 0));
        label_22->setText(QApplication::translate("MainClient", "<html><head/><body><p align=\"center\"><span style=\" font-size:12pt; font-weight:600;\">\320\245\320\260\321\200\320\260\320\272\321\202\320\265\321\200\320\270\321\201\321\202\320\270\320\272\320\260 \320\272\320\276\320\274\320\277\321\214\321\216\321\202\320\265\321\200\320\260</span></p></body></html>", 0));
        label_23->setText(QApplication::translate("MainClient", "<html><head/><body><p align=\"center\"><span style=\" font-size:12pt; font-weight:600;\">\320\237\320\260\320\274\321\217\321\202\321\214 \320\272\320\276\320\274\320\277\321\214\321\216\321\202\320\265\321\200\320\260</span></p></body></html>", 0));
        label_24->setText(QApplication::translate("MainClient", "<html><head/><body><p align=\"center\"><span style=\" font-size:12pt; font-weight:600;\">\320\230\320\275\321\204\320\276\321\200\320\274\320\260\321\206\320\270\321\217 \320\276 \320\277\320\276\320\264\320\272\320\273\321\216\321\207\320\265\320\275\320\270\320\270</span></p></body></html>", 0));
        label_2->setText(QString());
        label_4->setText(QApplication::translate("MainClient", "\320\237\320\260\321\200\320\260\320\274\320\265\321\202\321\200\321\213 \320\277\320\276\320\264\320\272\320\273\321\216\321\207\320\265\320\275\320\270\321\217", 0));
        label_3->setText(QApplication::translate("MainClient", "\320\220\320\264\321\200\320\265\321\201 \321\201\320\265\321\200\320\262\320\265\321\200\320\260", 0));
        setdefPB->setText(QApplication::translate("MainClient", "\320\237\320\276 \321\203\320\274\320\276\320\273\321\207\320\260\320\275\320\270\321\216", 0));
        label_5->setText(QApplication::translate("MainClient", "\320\237\320\260\321\200\320\276\320\273\321\214", 0));
        connectPB->setText(QApplication::translate("MainClient", "\320\237\320\276\320\264\320\272\320\273\321\216\321\207\320\270\321\202\321\214\321\201\321\217", 0));
        label_6->setText(QApplication::translate("MainClient", "\320\237\320\276\321\200\321\202", 0));
        pushButton_2->setText(QApplication::translate("MainClient", "\320\227\320\260\320\277\321\203\321\201\321\202\320\270\321\202\321\214 \320\277\321\200\320\276\321\206\320\265\321\201\321\201", 0));
        label_25->setText(QApplication::translate("MainClient", "<html><head/><body><p align=\"center\"><span style=\" font-size:12pt; font-weight:600;\">\320\222\321\213\320\277\320\276\320\273\320\275\321\217\320\265\320\274\321\213\320\265 \320\277\321\200\320\276\321\206\320\265\321\201\321\201\321\213</span></p></body></html>", 0));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("MainClient", "\320\230\320\274\321\217 \321\202\320\276\320\274\320\260", 0));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("MainClient", "\320\224\320\276\321\201\321\202\321\203\320\277\320\275\320\276\320\265 \320\274\320\265\321\201\321\202\320\276", 0));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("MainClient", "\320\222\321\201\320\265\320\263\320\276 \320\274\320\265\321\201\321\202\320\260", 0));
    } // retranslateUi

};

namespace Ui {
    class MainClient: public Ui_MainClient {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINCLIENT_H
