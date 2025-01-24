#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <qsqldatabase.h>
#include <QSqlRelationalTableModel>
#include <qtableview.h>
#include <qitemselectionmodel.h>
#include <qsqlrelationaldelegate.h>
#include <qfiledialog.h>
#include <qmessagebox.h>
#include <qsqlrecord.h>
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
    QSqlRelationalTableModel *tabModel;
    QItemSelectionModel* selModel;
    void opentable();
private slots:
    void do_currentChanged(const QModelIndex &current, const QModelIndex &previous);

    void on_action_triggered();
    void on_action_7_triggered();
};
#endif // MAINWINDOW_H
