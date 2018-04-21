/********************************************************************************
** Form generated from reading UI file 'mainclient.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
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
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainClient
{
public:
    QWidget *centralWidget;
    QHBoxLayout *horizontalLayout_2;
    QFrame *frame;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLabel *status;
    QLabel *label_2;
    QPushButton *reconnectPB;
    QPushButton *launchPB;
    QPushButton *SystemInfoPB;
    QPushButton *configPB;
    QPushButton *ping;
    QPushButton *exitPB;
    QFrame *frame_2;
    QGridLayout *gridLayout;
    QWidget *widget;
    QWidget *widget_2;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QWidget *page_2;
    QPushButton *pushButton;
    QListWidget *listWidget;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;

    void setupUi(QMainWindow *MainClient)
    {
        if (MainClient->objectName().isEmpty())
            MainClient->setObjectName(QStringLiteral("MainClient"));
        MainClient->resize(991, 463);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainClient->sizePolicy().hasHeightForWidth());
        MainClient->setSizePolicy(sizePolicy);
        MainClient->setStyleSheet(QStringLiteral("background-color:#2B2B2B; color:#FFF;"));
        centralWidget = new QWidget(MainClient);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        horizontalLayout_2 = new QHBoxLayout(centralWidget);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        frame = new QFrame(centralWidget);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setMinimumSize(QSize(250, 0));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        horizontalLayout_3 = new QHBoxLayout(frame);
        horizontalLayout_3->setSpacing(0);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setSizeConstraint(QLayout::SetDefaultConstraint);
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(frame);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        status = new QLabel(frame);
        status->setObjectName(QStringLiteral("status"));
        status->setEnabled(true);
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(2);
        sizePolicy1.setHeightForWidth(status->sizePolicy().hasHeightForWidth());
        status->setSizePolicy(sizePolicy1);
        status->setMinimumSize(QSize(200, 0));

        horizontalLayout->addWidget(status);


        verticalLayout->addLayout(horizontalLayout);

        label_2 = new QLabel(frame);
        label_2->setObjectName(QStringLiteral("label_2"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(1);
        sizePolicy2.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy2);
        label_2->setMinimumSize(QSize(0, 50));

        verticalLayout->addWidget(label_2);

        reconnectPB = new QPushButton(frame);
        reconnectPB->setObjectName(QStringLiteral("reconnectPB"));
        QSizePolicy sizePolicy3(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(2);
        sizePolicy3.setHeightForWidth(reconnectPB->sizePolicy().hasHeightForWidth());
        reconnectPB->setSizePolicy(sizePolicy3);
        reconnectPB->setMinimumSize(QSize(0, 50));
        QFont font;
        font.setPointSize(10);
        reconnectPB->setFont(font);
        reconnectPB->setStyleSheet(QLatin1String("background-color:#242424;\n"
"border-style: solid;\n"
"border-color: #FFF;\n"
"border-width: 1px;\n"
"padding:0px;\n"
"margin:0px;"));
        reconnectPB->setFlat(false);

        verticalLayout->addWidget(reconnectPB);

        launchPB = new QPushButton(frame);
        launchPB->setObjectName(QStringLiteral("launchPB"));
        sizePolicy3.setHeightForWidth(launchPB->sizePolicy().hasHeightForWidth());
        launchPB->setSizePolicy(sizePolicy3);
        launchPB->setMinimumSize(QSize(0, 50));
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
        SystemInfoPB->setMinimumSize(QSize(0, 50));
        SystemInfoPB->setFont(font);
        SystemInfoPB->setStyleSheet(QLatin1String("background-color:#242424;\n"
"border-style: solid;\n"
"border-color: #FFF;\n"
"border-width: 1px;\n"
"padding:0px;\n"
"margin:0px;"));
        SystemInfoPB->setFlat(false);

        verticalLayout->addWidget(SystemInfoPB);

        configPB = new QPushButton(frame);
        configPB->setObjectName(QStringLiteral("configPB"));
        sizePolicy3.setHeightForWidth(configPB->sizePolicy().hasHeightForWidth());
        configPB->setSizePolicy(sizePolicy3);
        configPB->setMinimumSize(QSize(0, 50));
        configPB->setFont(font);
        configPB->setStyleSheet(QLatin1String("background-color:#242424;\n"
"border-style: solid;\n"
"border-color: #FFF;\n"
"border-width: 1px;\n"
"padding:0px;\n"
"margin:0px;"));
        configPB->setFlat(false);

        verticalLayout->addWidget(configPB);

        ping = new QPushButton(frame);
        ping->setObjectName(QStringLiteral("ping"));
        sizePolicy3.setHeightForWidth(ping->sizePolicy().hasHeightForWidth());
        ping->setSizePolicy(sizePolicy3);
        ping->setMinimumSize(QSize(0, 50));
        ping->setFocusPolicy(Qt::NoFocus);
        ping->setStyleSheet(QLatin1String("background-color:#242424;\n"
"border-style: solid;\n"
"border-color: #FFF;\n"
"border-width: 1px;\n"
"padding:0px;\n"
"margin:0px;"));
        ping->setFlat(false);

        verticalLayout->addWidget(ping);

        exitPB = new QPushButton(frame);
        exitPB->setObjectName(QStringLiteral("exitPB"));
        sizePolicy3.setHeightForWidth(exitPB->sizePolicy().hasHeightForWidth());
        exitPB->setSizePolicy(sizePolicy3);
        exitPB->setMinimumSize(QSize(0, 50));
        exitPB->setFont(font);
        exitPB->setStyleSheet(QLatin1String("background-color:#242424;\n"
"border-style: solid;\n"
"border-color: #FFF;\n"
"border-width: 1px;\n"
"padding:0px;\n"
"margin:0px;"));
        exitPB->setFlat(false);

        verticalLayout->addWidget(exitPB);

        verticalLayout->setStretch(0, 2);
        verticalLayout->setStretch(2, 2);
        verticalLayout->setStretch(3, 2);
        verticalLayout->setStretch(4, 2);
        verticalLayout->setStretch(5, 2);
        verticalLayout->setStretch(6, 2);
        verticalLayout->setStretch(7, 2);

        horizontalLayout_3->addLayout(verticalLayout);


        horizontalLayout_2->addWidget(frame);

        frame_2 = new QFrame(centralWidget);
        frame_2->setObjectName(QStringLiteral("frame_2"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        gridLayout = new QGridLayout(frame_2);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        widget = new QWidget(frame_2);
        widget->setObjectName(QStringLiteral("widget"));

        gridLayout->addWidget(widget, 0, 0, 1, 3);

        widget_2 = new QWidget(frame_2);
        widget_2->setObjectName(QStringLiteral("widget_2"));

        gridLayout->addWidget(widget_2, 2, 0, 1, 1);

        stackedWidget = new QStackedWidget(frame_2);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        stackedWidget->setMinimumSize(QSize(250, 320));
        page = new QWidget();
        page->setObjectName(QStringLiteral("page"));
        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QStringLiteral("page_2"));
        pushButton = new QPushButton(page_2);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(260, 60, 251, 101));
        listWidget = new QListWidget(page_2);
        listWidget->setObjectName(QStringLiteral("listWidget"));
        listWidget->setGeometry(QRect(0, 190, 10, 10));
        sizePolicy.setHeightForWidth(listWidget->sizePolicy().hasHeightForWidth());
        listWidget->setSizePolicy(sizePolicy);
        pushButton_2 = new QPushButton(page_2);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(200, 180, 75, 23));
        pushButton_3 = new QPushButton(page_2);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(290, 210, 75, 23));
        stackedWidget->addWidget(page_2);

        gridLayout->addWidget(stackedWidget, 3, 2, 1, 1);


        horizontalLayout_2->addWidget(frame_2);

        MainClient->setCentralWidget(centralWidget);

        retranslateUi(MainClient);

        stackedWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainClient);
    } // setupUi

    void retranslateUi(QMainWindow *MainClient)
    {
        MainClient->setWindowTitle(QApplication::translate("MainClient", "MainClient", nullptr));
        label->setText(QApplication::translate("MainClient", "\320\241\320\276\321\201\321\202\320\276\321\217\320\275\320\270\320\265 \321\201\320\276\320\265\320\264\320\270\320\275\320\265\320\275\320\270\321\217: ", nullptr));
        status->setText(QApplication::translate("MainClient", "\320\275\320\265 \320\277\320\276\320\264\320\272\320\273\321\216\321\207\320\265\320\275\320\276", nullptr));
        label_2->setText(QApplication::translate("MainClient", "TextLabel", nullptr));
        reconnectPB->setText(QApplication::translate("MainClient", "\320\237\320\265\321\200\320\265\320\277\320\276\320\264\320\272\320\273\321\216\321\207\320\270\321\202\321\214\321\201\321\217", nullptr));
        launchPB->setText(QApplication::translate("MainClient", "\320\227\320\260\320\277\321\203\321\201\320\272 \320\277\321\200\320\276\321\206\320\265\321\201\321\201\320\260", nullptr));
        SystemInfoPB->setText(QApplication::translate("MainClient", "\320\245\320\260\321\200\320\260\320\272\321\202\320\265\321\200\320\270\321\201\321\202\320\270\320\272\320\260 \320\277\320\272", nullptr));
        configPB->setText(QApplication::translate("MainClient", "\320\230\320\267\320\274\320\265\320\275\320\270\321\202\321\214 \320\264\320\260\320\275\320\275\321\213\320\265 \320\277\320\276\320\264\320\272\320\273\321\216\321\207\320\265\320\275\320\270\321\217", nullptr));
        ping->setText(QApplication::translate("MainClient", "PING", nullptr));
        exitPB->setText(QApplication::translate("MainClient", "\320\222\321\213\320\271\321\202\320\270", nullptr));
        pushButton->setText(QApplication::translate("MainClient", "PushButton", nullptr));
        pushButton_2->setText(QApplication::translate("MainClient", "PushButton", nullptr));
        pushButton_3->setText(QApplication::translate("MainClient", "PushButton", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainClient: public Ui_MainClient {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINCLIENT_H
