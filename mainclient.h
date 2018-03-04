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

private:
	Ui::MainClient *ui;
	QTcpSocket* mTcpSocket;
	quint16 iNextBlocksize;
    void loadSettings();
    void saveSettings();
    void defaultSettings();
    QString m_sSettingsFile;



private slots:
	void slotReadyRead();
	void slotError(QAbstractSocket::SocketError);
	void slotSendToServer(bool);
	void slotConnected();
    void slotDisconected();
    void slotConnect();
    void slotSender();
    void slotConfig();
    void showinfo();
    void closeEvent (QCloseEvent *event);

signals:
    void closing();
    void error();
    void messaged();
    void xclicked();
    void reconnect();

};

#endif // MAINCLIENT_H
