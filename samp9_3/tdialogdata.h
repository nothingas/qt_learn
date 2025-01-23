#ifndef TDIALOGDATA_H
#define TDIALOGDATA_H

#include <QDialog>
#include <QMainWindow>
#include <QtSql/qsqldatabase.h>
#include <qitemselectionmodel.h>
#include <qsqlquerymodel.h>
#include <QtSql/qsqlquery.h>
#include <qfiledialog.h>
#include <qmessagebox.h>
#include <qsqlerror.h>
#include <qsqlrecord.h>



namespace Ui {
class TDialogData;
}

QT_END_NAMESPACE
class TDialogData : public QDialog
{
    Q_OBJECT

public:
    TDialogData(QWidget *parent = nullptr);
    ~TDialogData();

    void setUpdateRecord(QSqlRecord &recData);
    void setInsertRecord(QSqlRecord &recData);
    QSqlRecord getRecordData();


private:
    Ui::TDialogData *ui;
    QSqlRecord m_record;
private slots:

    void on_pushButton_clicked();
    void on_pushButton_2_clicked();
    void on_pushButton_3_clicked();
    void on_pushButton_4_clicked();
};

#endif // TDIALOGDATA_H
