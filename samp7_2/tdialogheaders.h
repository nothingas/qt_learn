#ifndef TDIALOGHEADERS_H
#define TDIALOGHEADERS_H

#include <QDialog>
#include <QStringListModel>
#include <QListView>
#include <QMessageBox>
namespace Ui {
class TDialogHeaders;
}

class TDialogHeaders : public QDialog
{
    Q_OBJECT

public:
    explicit TDialogHeaders(QWidget *parent = nullptr);
    ~TDialogHeaders();
    QStringList headerList();
    void setHeaderList(QStringList& headers);
private:
    Ui::TDialogHeaders *ui;
    QStringListModel* model;

};

#endif // TDIALOGHEADERS_H
