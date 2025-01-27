#ifndef TPENDIALOG_H
#define TPENDIALOG_H

#include <QDialog>
#include <QPen>
#include <QColorDialog>
namespace Ui {
class TPenDialog;
}

class TPenDialog : public QDialog
{
    Q_OBJECT

public:
    explicit TPenDialog(QWidget *parent = nullptr);
    ~TPenDialog();
    void setPen(QPen &pen);
    QPen getPen();
    static QPen getPen(QPen &iniPen,bool *ok);
private:
    Ui::TPenDialog *ui;
    QPen m_pen;
private slots:

    void on_pushButton_clicked();
};

#endif // TPENDIALOG_H
