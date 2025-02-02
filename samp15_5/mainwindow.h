#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QNetworkAccessManager>
#include <QNetworkReply>
#include <QFile>
#include <QMessageBox>
#include <QDir>
#include <QUrl>
#include <QDesktopServices>
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
    QNetworkAccessManager networkManager;
    QNetworkReply   *reply;
    QFile   *downloadedFile;
private slots:
    void do_finished();
    void do_readyRead();
    void do_downloadProgress(qint64 bytesRead, qint64 totalBytes);
    void on_pushButton_2_clicked();
    void on_pushButton_clicked();
};
#endif // MAINWINDOW_H
