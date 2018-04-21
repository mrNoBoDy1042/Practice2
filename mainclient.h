#ifndef MAINCLIENT_H
#define MAINCLIENT_H

#include <QMainWindow>
#include <QTcpSocket>
#include <QMessageBox>
#include <QTime>
#include <QHostInfo>
#include "dialog2.h"

namespace Ui {
	class MainClient;
}

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
        struct strct
        {
         QString PCname;
         QString OS;
         QString Capacity;
         QString CPU;
         QString GPU;
         QString RAM;

         friend QDataStream& operator >>(QDataStream& in, strct& st)
         {
          return in >> st.PCname >> st.OS >> st.Capacity >> st.CPU >> st.GPU >> st.RAM;
         }

         friend QDataStream& operator <<(QDataStream& in, strct& st)
         {
          return in << st.PCname << st.OS << st.Capacity << st.CPU << st.GPU << st.RAM;
         }
        };

    private:
        Ui::MainClient *ui;
        QTcpSocket* mTcpSocket;
        quint16 iNextBlocksize;
        void loadSettings();
//        void saveSettings();
//        void defaultSettings();
        QString m_sSettingsFile;

    private slots:
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
