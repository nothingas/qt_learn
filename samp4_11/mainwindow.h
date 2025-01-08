#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "qlistwidget.h"
#include "QListWidgetItem"
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
    void on_a1_triggered();

    void on_a2_triggered();

    void on_a3_triggered();

    void on_a4_triggered();

    void on_a5_triggered();

    void on_a6_triggered();

    void on_a7_triggered();

    void on_a8_triggered();



    void on_toolButton_6_clicked();

    void on_toolButton_7_clicked();

    void on_checkBox_2_clicked(bool checked);

    void on_listWidget_currentItemChanged(QListWidgetItem *current, QListWidgetItem *previous);

    void on_listWidget_currentRowChanged(int currentRow);

    void on_listWidget_currentTextChanged(const QString &currentText);

    void on_listWidget_customContextMenuRequested(const QPoint &pos);

private:
    void SetUi();
    void SetSelectionMenu();
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
