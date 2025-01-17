#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QStandardItemModel>
#include <QTableView>
#include <QItemSelectionModel>
#include <QLabel>
#include <QMessageBox>
#include <QEvent>
#include <QCloseEvent>
#include "tdialogsize.h"
#include "tdialogheaders.h"
#include "tdialoglocate.h"
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
    QLabel *labpos;
    QLabel *labtext;


    Ui::MainWindow *ui;
    QStandardItemModel* model;
    QItemSelectionModel* m_selection;

    TDialogHeaders *dlgsetHeaders = nullptr;
    TDialogLocate *dlglocate = nullptr;
private slots:
    void do_model_currentChange(const QModelIndex &current, const QModelIndex &previous);
    //void do_setcellText(int row, int column,QString &text);
    void on_action1_triggered();

    void on_action2_triggered();

    void on_action4_triggered();

    void do_setcelltext(int row, int column, QString &text);
    void on_tableView_clicked(const QModelIndex &index);

    void on_action3_triggered();

protected:
    void closeEvent(QCloseEvent* event);
signals:
    void cellindexchange(int rowNow, int colNow);
};
#endif // MAINWINDOW_H
