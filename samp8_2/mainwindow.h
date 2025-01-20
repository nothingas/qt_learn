#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QFile>
#include <qdir.h>
#include <qfiledialog.h>
#include <qsavefile.h>
#include <qexception.h>
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

private slots:
    void on_action1_triggered();



    void on_action2_triggered();

    void on_action3_triggered();

    void on_action4_triggered();

private:
    Ui::MainWindow *ui;
    bool openByIO_whole(const QString &str);
    bool openByIO_lines(const QString &str);

    bool saveByIO_whole(const QString &str);
    bool saveByIO_Safe(const QString &str);

    bool openByStream_Lines(const QString &aFileName);
    void print1(const QString &str);
};
#endif // MAINWINDOW_H
