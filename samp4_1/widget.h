#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QLayout>
#include <qgroupbox.h>
#include <qsplitter.h>
#include <qpushbutton.h>
#include <qtextedit.h>
#include <qlineedit.h>
#include <qlabel.h>
#include <qcheckbox.h>
#include <QPlainTextEdit>
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
    // Layout:
    QVBoxLayout* totallayout;
    QGridLayout* layout1;
    QGridLayout* layout2;
    QHBoxLayout* layout3;
    QVBoxLayout* layout4;

    // GroupBox:
    QGroupBox* gpbox1;
    QGroupBox* gpbox2;
    QGroupBox* gpbox3;
    QGroupBox* gpbox4;
    //spliter:
    QSplitter* splitter1;
    //buttons:
    QPushButton* btn1;
    QPushButton* btn2;
    QPushButton* btn3;
    QPushButton* btn4;
    QPushButton* btn5;
    QPushButton* btn6;

    //textedit:
    QLabel* str1;
    QLabel* str2;
    QLineEdit* text1;
    QLineEdit* text2;

    QPlainTextEdit* text3;

    Ui::Widget *ui;

    QCheckBox* ck1;
    QCheckBox* ck2;
    QCheckBox* ck3;
    QCheckBox* ck4;
    QCheckBox* ck5;
    QCheckBox*ck6;
    QCheckBox*ck7;
    QCheckBox*ck8;
    QCheckBox*ck9;

    void iniSignalSlots();
private slots:
    void btn1_GetChars();
    void btn2_CharJudge();
    void btn3_transferLatin();
    void btn4_transferutf16();
    void btn5_qchartransfer();
    void btn6_clear();

};
#endif // WIDGET_H
