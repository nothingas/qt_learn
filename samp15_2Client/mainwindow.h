#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTcpSocket>
#include <QLabel>
#include <QHostInfo>
QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    QTcpSocket *tcpClient;
    QLabel *labSocketState;
    QString getLocalIP();

    void out(const QString str);
private slots:
    void do_connected();
    void do_disconnected();
    void do_socketStateChange(QAbstractSocket::SocketState socketState);
    void do_socketReadyRead();
    void on_actionconnect_triggered();
    void on_actiondisconnect_triggered();
    void on_pushButton_clicked();
};
#endif // MAINWINDOW_H
