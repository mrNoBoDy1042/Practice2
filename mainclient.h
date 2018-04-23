#ifndef MAINCLIENT_H
#define MAINCLIENT_H

#include <QMainWindow>
#include <QTcpSocket>
#include <QMessageBox>
#include <QTime>
#include <QHostInfo>
#include <QThread>
#include "dialog2.h"

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
        quint16 iNextBlocksize;
        void loadSettings();
//        void saveSettings();
//        void defaultSettings();
		QString m_sSettingsFile;

//		QThread workerThread;
public:
		QTcpSocket* mTcpSocket;
		staticInfo staticInformation;
		dynamicInfo dynamicInformation;

		void SendStaticInfo();
		void SendDynamicInfo();

    private slots:
//		void GetLoad();


        void slotReadyRead();
        void slotError(QAbstractSocket::SocketError);
        void slotSendToServer();
        void slotConnected();
        void slotDisconected();
        void slotConnect();
        void slotSender();
        void slotConfig();
        void slotLaunch();
        void showinfo();
        void closeEvent (QCloseEvent *event);
        void slotSetDefault();
        void saveSettings();
        void slotMainPage();
        void slotHint(QString);
        void slotAboutToExit();

    signals:
        void closing();
        void error(QString);
        void reconnect();
};

#endif // MAINCLIENT_H
