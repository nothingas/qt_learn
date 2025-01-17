#ifndef TDIALOGSIZE_H
#define TDIALOGSIZE_H

#include <QDialog>
#include <QMessageBox>
namespace Ui {
class TDialogsize;
}

class TDialogsize : public QDialog
{
    Q_OBJECT

public:
    explicit TDialogsize(QWidget *parent = nullptr);
    ~TDialogsize();
    int rowcount();
    int columncount();
    void setrowcolumn(int row, int column);


private slots:


private:
    Ui::TDialogsize *ui;
};

#endif // TDIALOGSIZE_H
