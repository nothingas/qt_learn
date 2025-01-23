#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtSql/qsqldatabase.h>
#include <QtSql/qsqlquerymodel.h>
#include <qitemselectionmodel.h>
#include <qdatawidgetmapper.h>
#include <qfiledialog.h>
#include <qmessagebox.h>
#include <qsqlerror.h>
#include <qsqlrecord.h>
#include <qsqlquery.h>
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
    QSqlQueryModel *qrymodel;
    QItemSelectionModel *selmodel;
    QDataWidgetMapper * mapper;
    void selectData();
    void refreshTableView();
private slots:
    void do_currentRowChanged(const QModelIndex &current, const QModelIndex &previous);
    void on_act_open_triggered();
    void on_action_4_triggered();
    void on_action_2_triggered();
    void on_action_3_triggered();
    void on_action_5_triggered();
    void on_action_triggered();
};
#endif // MAINWINDOW_H
