#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QLabel>
#include <QTcpSocket>
#include <QTcpServer>
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
    QLabel* labListen;
    QLabel* labSocketState;
    QTcpServer *tcpServer;
    QTcpSocket *tcpSocket = nullptr;
    QString getLocalIP();
private slots:
    void do_newConnection();
    void do_socketStateChange(QAbstractSocket::SocketState socketState);
    void do_clientConnected();
    void do_clientDisconnected();
    void do_socketReadyRead();
    void on_actionbegin_triggered();
    void on_actionstop_triggered();
    void on_pushButton_clicked();
};
#endif // MAINWINDOW_H
