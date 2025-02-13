#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtSql>
#include <QDataWidgetMapper>
#include "tcomboboxdelegate.h"
#include "qfiledialog.h"
#include "qmessagebox.h"
#include "qmessagebox.h"
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

    QSqlDatabase DB;
    QSqlTableModel* tableModel;
    QItemSelectionModel* selModel;
    QDataWidgetMapper *dataMapper;
    TComboBoxDelegate delegateSex;
    TComboBoxDelegate delegateDepart;

    void openTable();
    void getFieldNames();
    void showRecordCount();
private slots:
    void do_currentChanged(const QModelIndex &current, const QModelIndex &previous);
    void do_currentRowChanged(const QModelIndex &current, const QModelIndex &previous);
    void on_action_open_triggered();
    void on_actRecAppend_triggered();
    void on_actRecInsert_triggered();
    void on_actRecDelete_triggered();
    void on_actSubmit_triggered();
    void on_actRevert_triggered();
    void on_actPhoto_triggered();
    void on_actPhotoClear_triggered();
    void on_actScan_triggered();
    void on_comboFields_currentIndexChanged(int index);
    void on_radioButton_4_clicked();
    void on_radioButton_5_clicked();
    void on_radioButton_clicked();
    void on_radioButton_2_clicked();
    void on_radioButton_3_clicked();
    void on_actQuit_triggered();
};
#endif // MAINWINDOW_H
