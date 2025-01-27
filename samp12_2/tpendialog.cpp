#include "tpendialog.h"
#include "ui_tpendialog.h"

TPenDialog::TPenDialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::TPenDialog)
{
    ui->setupUi(this);
    ui->comboBox->clear();
    ui->comboBox->addItem("NoPen");
    //添加字符串
    ui->comboBox->addItem("SolidLine");
    //序号正好与 Qt::PenStyle 的枚举值对应
    ui->comboBox->addItem("DashLine");
    ui->comboBox->addItem("DotLine");
    ui->comboBox->addItem("DashDotLine");
    ui->comboBox->addItem("DashDotDotLine");
    ui->comboBox->setCurrentIndex(1);

}

TPenDialog::~TPenDialog()
{
    delete ui;
}


QPen TPenDialog::getPen(QPen &iniPen, bool *ok)
{
    TPenDialog *dlg= new TPenDialog;
    QPen  pen;
    int ret = dlg->exec();
    if(ret == QDialog::Accepted)
    {
        pen = dlg->getPen();
        *ok = true;
    }
    else
    {
        pen = iniPen;
        *ok = false;
    }
    delete dlg;
    return pen;
}

QPen TPenDialog::getPen()
{
    m_pen.setStyle(Qt::PenStyle(ui->comboBox->currentIndex()));
    m_pen.setWidth(ui->spinBox->value());
    QColor color = ui->pushButton->palette().color(QPalette::Button);
    m_pen.setColor(color);
    return m_pen;
}

void TPenDialog::setPen(QPen &pen)
{
    m_pen= pen;
    ui->spinBox->setValue(pen.width());
    int i= static_cast<int>(pen.style());
    ui->comboBox->setCurrentIndex(i);
    QColor color= pen.color();
    ui->pushButton->setAutoFillBackground(true);
    QString str= QString::asprintf("background-color: rgb(%d, %d, %d);",
                                    color.red(),color.green(),color.blue());
    ui->pushButton->setStyleSheet(str);
}

void TPenDialog::on_pushButton_clicked()
{
    QColor color= QColorDialog::getColor();
    if(color.isValid())
    {
        QString str = QString::asprintf("background-color: rgb(%d, %d, %d);",color.red(),color.green(),color.blue());
        ui->pushButton->setStyleSheet(str);
    }
}
