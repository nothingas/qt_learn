#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

    ui->listWidget->installEventFilter(this);
    ui->listWidget_2->installEventFilter(this);
    ui->treeWidget->installEventFilter(this);
    ui->tableWidget->installEventFilter(this);

    ui->listWidget->setAcceptDrops(true);
    ui->listWidget_2->setAcceptDrops(true);
    ui->treeWidget->setAcceptDrops(true);
    ui->tableWidget->setAcceptDrops(true);

    ui->listWidget->setDragDropMode(QAbstractItemView::DragDrop);
    ui->listWidget_2->setDragDropMode(QAbstractItemView::DragDrop);
    ui->treeWidget->setDragDropMode(QAbstractItemView::DragDrop);
    ui->tableWidget->setDragDropMode(QAbstractItemView::DragDrop);

    ui->listWidget->setDragEnabled(true);
    ui->listWidget_2->setDragEnabled(true);
    ui->treeWidget->setDragEnabled(true);
    ui->tableWidget->setDragEnabled(true);

    ui->listWidget->setAcceptDrops(true);
    ui->listWidget_2->setAcceptDrops(true);
    ui->treeWidget->setAcceptDrops(true);
    ui->tableWidget->setAcceptDrops(true);

    ui->listWidget->addItem("a1");
    ui->listWidget->addItem("a2");

    ui->listWidget_2->addItem("b1");
    ui->listWidget_2->addItem("b2");




}

Widget::~Widget()
{
    delete ui;
}

void Widget::refreshToUI(QGroupBox *curGroupBox)
{
    ui->checkBox->setChecked(m_itemView->acceptDrops());
    ui->checkBox_2->setCheckable(m_itemView->dragEnabled());
    ui->comboBox->setCurrentIndex((int)m_itemView->dragDropMode());
    int index = getDropActionIndex(m_itemView->defaultDropAction());
    ui->comboBox_2->setCurrentIndex(index);

    QFont font = ui->groupBox_3->font();
    font.setBold(false);
    ui->groupBox_3->setFont(font);
    ui->groupBox_4->setFont(font);
    ui->groupBox_5->setFont(font);
    ui->groupBox_6->setFont(font);
    font.setBold(true);
    curGroupBox->setFont(font);
}

int Widget::getDropActionIndex(Qt::DropAction actiontype)
{
    switch (actiontype)
    {
    case Qt::CopyAction:
        return 0;
    case Qt::MoveAction:
        return 1;
    case Qt::LinkAction:
        return 2;
    case Qt::IgnoreAction:
        return 3;
    default:
        return 0;
    }
}

Qt::DropAction Widget::getDropActionType(int index)
{
    switch (index)
    {
    case 0:
        return Qt::CopyAction;
    case 1:
        return Qt::MoveAction;
    case 2:
        return Qt::LinkAction;
    case 3:
        return Qt::IgnoreAction;
    default:
        return Qt::CopyAction;
    }
}

void Widget::on_radioButton_clicked()
{
    m_itemView = ui->listWidget;
    refreshToUI(ui->groupBox_3);
}


void Widget::on_radioButton_2_clicked()
{
    m_itemView = ui->listWidget_2;
    refreshToUI(ui->groupBox_4);
}


void Widget::on_radioButton_3_clicked()
{
    m_itemView = ui->treeWidget;
    refreshToUI(ui->groupBox_5);
}


void Widget::on_radioButton_4_clicked()
{
    m_itemView = ui->tableWidget;
    refreshToUI(ui->groupBox_6);
}


void Widget::on_checkBox_clicked(bool checked)
{
    m_itemView->setAcceptDrops(checked);
}


void Widget::on_checkBox_2_clicked(bool checked)
{
    m_itemView->setDragEnabled(checked);
}


void Widget::on_comboBox_currentIndexChanged(int index)
{
    QAbstractItemView::DragDropMode mode = (QAbstractItemView::DragDropMode)index;
    m_itemView->setDragDropMode(mode);
}


void Widget::on_comboBox_2_currentIndexChanged(int index)
{
    Qt::DropAction actiontype = getDropActionType(index);
    m_itemView->setDefaultDropAction(actiontype);
}

bool Widget::eventFilter(QObject *watched, QEvent *event)
{
    if(event->type() != QEvent::KeyPress || (static_cast<QKeyEvent *>(event))->key() != Qt::Key_Delete ){return QWidget::eventFilter(watched,event);}

    switch(WidgetitemToInt(watched))
    {
    case 1:
    {QListWidgetItem* item = ui->listWidget->takeItem(ui->listWidget->currentRow());
        delete item;
        break;
    }
    case 2:
    {
        QListWidgetItem* item = ui->listWidget_2->takeItem(ui->listWidget_2->currentRow());
        delete item;
        break;
    }
    case 3:
    {
        QTreeWidgetItem* item = ui->treeWidget->currentItem();
        if(item->parent() !=nullptr){item->parent()->removeChild(item);}
        else{ui->treeWidget->takeTopLevelItem(ui->treeWidget->indexOfTopLevelItem(item));}
        delete item;
        break;
    }
    case 4:
    {
        QTableWidgetItem* item = ui->tableWidget->takeItem(ui->tableWidget->currentRow(),ui->tableWidget->currentColumn());
        delete item;
        break;
    }
    }
    return true;
}

int Widget::WidgetitemToInt(QObject *watched)
{
    if(watched == ui->listWidget)return 1;
    else if(watched == ui->listWidget_2)return 2;
    else if(watched == ui->treeWidget)return 3;
    else if(watched == ui->tableWidget)return 4;
    else return 0;
}










