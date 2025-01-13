#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QFileSystemModel>
#include <QFileDialog>
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
    void on_treeView_clicked(const QModelIndex &index);

    void on_action2_triggered();

    void on_action_triggered();

    void on_radioButton_clicked();

    void on_radioButton_2_clicked();

    void on_checkBox_clicked(bool checked);

    void on_pushButton_clicked();

private:
    Ui::MainWindow *ui;
    QFileSystemModel *model;
};
#endif // MAINWINDOW_H
