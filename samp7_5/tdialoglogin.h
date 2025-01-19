#ifndef TDIALOGLOGIN_H
#define TDIALOGLOGIN_H

#include <QDialog>
#include <QPoint>
#include <qsettings.h>
#include <QMouseEvent>
#include <QCryptographicHash>
#include <QMessageBox>
namespace Ui {
class TDialogLogin;
}

class TDialogLogin : public QDialog
{
    Q_OBJECT

public:
    explicit TDialogLogin(QWidget *parent = nullptr);
    ~TDialogLogin();

private:
    Ui::TDialogLogin *ui;

private:
    bool m_moving = false;
    QPoint m_lastPos;
    QString m_user = "user";
    QString m_pswd = "12345";
    int m_tryCount = 0;
    void readSettings();
    void writeSettings();
    QString encrypt(const QString &str);

protected:
    void mousePressEvent(QMouseEvent *event);
    void mouseMoveEvent(QMouseEvent *event);
    void mouseReleaseEvent(QMouseEvent *event);
private slots:
    void on_pushButton_clicked();
};

#endif // TDIALOGLOGIN_H
