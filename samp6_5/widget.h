#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QAbstractItemView>
#include <QGroupBox>
#include <QEvent>
#include <QKeyEvent>
#include <QObject>
QT_BEGIN_NAMESPACE
namespace Ui {
class Widget;
}
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();

private:
    Ui::Widget *ui;
    int getDropActionIndex(Qt::DropAction actiontype);
    Qt::DropAction getDropActionType(int index);
    QAbstractItemView *m_itemView = nullptr;
    void refreshToUI(QGroupBox *curGroupBox);
    int WidgetitemToInt(QObject* watched);
protected:
    bool eventFilter(QObject *watched, QEvent *event);
private slots:
    void on_radioButton_clicked();
    void on_radioButton_2_clicked();
    void on_radioButton_3_clicked();
    void on_radioButton_4_clicked();
    void on_checkBox_clicked(bool checked);
    void on_checkBox_2_clicked(bool checked);
    void on_comboBox_currentIndexChanged(int index);
    void on_comboBox_2_currentIndexChanged(int index);
};
#endif // WIDGET_H
