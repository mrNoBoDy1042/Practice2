#ifndef MAINCLIENT_H
#define MAINCLIENT_H

#include <QMainWindow>
#include <QTcpSocket>

namespace Ui {
	class MainClient;
}

class MainClient : public QMainWindow
{
	Q_OBJECT

public:
	explicit MainClient(QWidget *parent = 0);
	~MainClient();

private:
	Ui::MainClient *ui;
	QTcpSocket* mTcpSocket;
	quint16 iNextBlocksize;

private slots:
	void slotReadyRead();
	void slotError(QAbstractSocket::SocketError);
	void slotSendToServer(bool);
	void slotConnected();
};

#endif // MAINCLIENT_H
