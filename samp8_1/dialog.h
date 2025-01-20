#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include <qfilesystemwatcher.h>
#include <qfile.h>
#include <qfileinfo.h>
#include <qdir.h>
#include <qstringlist.h>
#include <qtemporarydir.h>
#include <qtemporaryfile.h>
QT_BEGIN_NAMESPACE
namespace Ui {
class Dialog;
}
QT_END_NAMESPACE

class Dialog : public QDialog
{
    Q_OBJECT

public:
    Dialog(QWidget *parent = nullptr);
    ~Dialog();

private:
    Ui::Dialog *ui;


private:
    QFileSystemWatcher fileWatcher;
    void show_btn_info(QObject* btn);
    void print(QString str);
    QString get1();
    QString get2();
public slots:
    void do_directoryChanged(const QString &path);
    void do_fileChanged(const QString &path);
private slots:
    void on_pushButton_19_clicked();
    void on_pushButton_20_clicked();
    void on_pushButton_21_clicked();
    void on_pushButton_22_clicked();
    void on_pushButton_23_clicked();
    void on_clear_clicked();
    void on_pushButton_clicked();
    void on_pushButton_24_clicked();
    void on_pushButton_25_clicked();
    void on_pushButton_26_clicked();
    void on_pushButton_29_clicked();

    void on_pushButton_32_clicked();
};
#endif // DIALOG_H
