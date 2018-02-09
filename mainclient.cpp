#include "mainclient.h"
#include "ui_mainclient.h"

/* STL */
#include <windows.h>

static float CalculateCPULoad(unsigned long long idleTicks, unsigned long long totalTicks)
{
   static unsigned long long _previousTotalTicks = 0;
   static unsigned long long _previousIdleTicks = 0;

   unsigned long long totalTicksSinceLastTime = totalTicks-_previousTotalTicks;
   unsigned long long idleTicksSinceLastTime  = idleTicks-_previousIdleTicks;

   float ret = 1.0f-((totalTicksSinceLastTime > 0) ? ((float)idleTicksSinceLastTime)/totalTicksSinceLastTime : 0);

   _previousTotalTicks = totalTicks;
   _previousIdleTicks  = idleTicks;
   return ret;
}

static unsigned long long FileTimeToInt64(const FILETIME & ft) {
	return (((unsigned long long)(ft.dwHighDateTime))<<32)|((unsigned long long)ft.dwLowDateTime);
}

// Returns 1.0f for "CPU fully pinned", 0.0f for "CPU idle", or somewhere in between
// You'll need to call this at regular intervals, since it measures the load between
// the previous call and the current one.  Returns -1.0 on error.
float GetCPULoad()
{
   FILETIME idleTime, kernelTime, userTime;
   return GetSystemTimes(&idleTime, &kernelTime, &userTime) ? CalculateCPULoad(FileTimeToInt64(idleTime), FileTimeToInt64(kernelTime)+FileTimeToInt64(userTime)) : -1.0f;
}


/* QT Framework */
#include <QMessageBox>
#include <QTime>

MainClient::MainClient(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainClient)
{
    ui->setupUi(this);

	mTcpSocket = new QTcpSocket(this);
	mTcpSocket->connectToHost("localhost", 32094);

	connect(mTcpSocket, SIGNAL(connected()), SLOT(slotConnected()));
	connect(mTcpSocket, SIGNAL(readyRead()), SLOT(slotReadyRead()));
	connect(mTcpSocket, SIGNAL(error(QAbstractSocket::SocketError)),
			   this, SLOT(slotError(QAbstractSocket::SocketError)));

	//connect(ui->LineEdit, SIGNAL(returnPressed()), this, SLOT(slotSendToServer(bool)));
	connect(ui->SendButton, SIGNAL(clicked(bool)), SLOT(slotSendToServer(bool)));
	iNextBlocksize = 0;
}

MainClient::~MainClient()
{
	delete ui;
}

void MainClient::slotReadyRead()
{
	QDataStream in(mTcpSocket);
	in.setVersion(QDataStream::Qt_5_5);

	for(;;) {
		if (!iNextBlocksize) {
			if (mTcpSocket->bytesAvailable() < sizeof(quint16)) {
				break;
			}
			in >> iNextBlocksize;
		}

		if (mTcpSocket->bytesAvailable() < iNextBlocksize) {
			break;
		}
		QTime time;
		QString str;
		in >> time >> str;

		ui->listWidget->addItem(time.toString() + " " + str);
		iNextBlocksize = 0;
	}
}

void MainClient::slotError(QAbstractSocket::SocketError err)
{
	QString strError = "Error: " + (err == QAbstractSocket::HostNotFoundError ?
									"The host was not found." :
									err == QAbstractSocket::RemoteHostClosedError ?
									"The remote host is closed." :
									err == QAbstractSocket::ConnectionRefusedError ?
									"The connection was refused." :
									QString(mTcpSocket->errorString())
									);
	ui->listWidget->addItem(strError);
}

void MainClient::slotSendToServer(bool)
{
	QByteArray  arrBlock;
	QDataStream out(&arrBlock, QIODevice::WriteOnly);
	out.setVersion(QDataStream::Qt_5_5);
	out << quint16(0) << QTime::currentTime() << ui->LineEdit->text();

	out.device()->seek(0);
	out << quint16(arrBlock.size() - sizeof(quint16));

	mTcpSocket->write(arrBlock);
	ui->LineEdit->setText("");
}

void MainClient::slotConnected()
{
	ui->listWidget->addItem("Received the connected() signal");
}
