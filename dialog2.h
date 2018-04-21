#ifndef DIALOG2_H
#define DIALOG2_H

#include <QDialog>
#include <QJsonObject>
#include <mainclient.h>

namespace Ui {
    class Dialog2;
}

class Dialog2 : public QDialog
{
    Q_OBJECT

    public:
        explicit Dialog2(QWidget *parent = 0, QString address = "localhost", int port=32094);
        QString address;
        int port;
        QString m_sSettingsFile;
        ~Dialog2();

    private:
        Ui::Dialog2 *ui;

    private slots:
        void slotSetDefault();
        void saveSettings();
        void slotCancel();

};

#endif // DIALOG2_H
