#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtSql/qsqldatabase.h>
#include <qitemselectionmodel.h>
#include <qsqlquerymodel.h>
#include <QtSql/qsqlquery.h>
#include <qfiledialog.h>
#include <qmessagebox.h>
#include <qsqlerror.h>
#include <qsqlrecord.h>
#include "tdialogdata.h"



//暂时有问题
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
    void on_action_3_triggered();

private:
    Ui::MainWindow *ui;
    QSqlDatabase DB;
    QSqlQueryModel* qrymodel;
    QItemSelectionModel* selmodel;
    void selectData();
    void updateRecord(int recNo);
};
#endif // MAINWINDOW_H
