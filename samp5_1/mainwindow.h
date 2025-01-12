#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QStringList>
#include <QStringListModel>
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
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_7_clicked();

    void on_pushButton_8_clicked(bool checked);

    void on_checkBox_clicked(bool checked);

    void on_listView_clicked(const QModelIndex &index);

    void on_pushButton_10_clicked();

    void on_pushButton_9_clicked();

private:
    Ui::MainWindow *ui;
    QStringList m_strlist;
    QStringListModel *m_model;
};
#endif // MAINWINDOW_H
