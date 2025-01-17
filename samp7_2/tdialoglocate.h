#ifndef TDIALOGLOCATE_H
#define TDIALOGLOCATE_H

#include <QDialog>
#include <QMessageBox>
#include <QEvent>
#include <QCloseEvent>
#include <QShowEvent>
namespace Ui {
class TDialogLocate;
}

class TDialogLocate : public QDialog
{
    Q_OBJECT

protected:
    void closeEvent(QCloseEvent* event);
    void showEvent(QShowEvent *event);

public:
    explicit TDialogLocate(QWidget *parent = nullptr);
    ~TDialogLocate();
    void setSpinRange(int rowcount, int colcount);
public slots:
    void setSpinValue(int rowNow, int colNow);
signals:
    void changeCellText(int row, int col, QString &text);
    void changeActionEnable(bool en);
private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::TDialogLocate *ui;
};

#endif // TDIALOGLOCATE_H
