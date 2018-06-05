#ifndef MAINCLIENT_H
#define MAINCLIENT_H

#include <QMainWindow>
#include <QTcpSocket>
#include <QMessageBox>
#include <QTime>
#include <QHostInfo>
#include <QThread>
#include <windows.h>
#include <w32api.h>
#include <tlhelp32.h>
#include <psapi.h>

namespace Ui {
	class MainClient;
}
struct staticInfo
{
    QString PCName;
    QString OS;
    QString Bit;
    QString CPU;
    QString GPU;
    QString RAM;


    friend inline QDataStream& operator >>(QDataStream& t, staticInfo& p)
    {
        return t >> p.PCName >> p.OS >> p.Bit >> p.CPU >> p.GPU >> p.RAM;
    }
    friend inline QDataStream& operator <<(QDataStream& t, staticInfo& p)
    {
        return t << p.PCName
                 << p.OS
                 << p.Bit
                 << p.CPU
                 << p.GPU
                 << p.RAM;
    }
};
struct dynamicInfo
{
    double CPU;
    double GPU;
    double RAM;

    friend inline QDataStream& operator >>(QDataStream& t, dynamicInfo& p)
    {
        return t >> p.CPU >> p.GPU >> p.RAM;
    }
    friend inline QDataStream& operator <<(QDataStream& t, dynamicInfo& p)
    {
        return t << p.CPU
                 << p.GPU
                 << p.RAM;
    }
};
class MainClient : public QMainWindow
{
	Q_OBJECT

    public:
        explicit MainClient(QWidget *parent = 0);
        ~MainClient();
        int port;
        QString address;
        QDialog *d;
        QDialog *sysinfo;

    private:
		Ui::MainClient *ui;
        quint8 iNextBlocksize;
        void loadSettings();
//        void saveSettings();
//        void defaultSettings();
		QString m_sSettingsFile;

        QString copyToQString(WCHAR array[MAX_PATH]);
//		QThread workerThread;
    public:
		QTcpSocket* mTcpSocket;
		staticInfo staticInformation;
		dynamicInfo dynamicInformation;
        QPushButton *button[];

        //---------------------------------------------------------------------------------------------------------
        // MV's changes
        bool stopped;
        int exitcode;

        void GetLoadCycle();
        void SendInfo(char b);
        //---------------------------------------------------------------------------------------------------------

    private slots:
        void UpdateLabel(QString CPU, QString GPU);
        void getTasks();
        void slotReadyRead();
        void slotError(QAbstractSocket::SocketError);
        void slotConnected();
        void slotDisconected();
        void slotConnect();
        void slotLaunch();
        void closeEvent (QCloseEvent *event);
        void slotSetDefault();
        void saveSettings();
        void slotAboutToExit();
        void slotButtonHandler();

    signals:
        void reconnect();
        void launch();
        void change(QString, QString);
};

#endif // MAINCLIENT_H
