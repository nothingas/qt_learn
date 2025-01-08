#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "qmenu.h"
#include "qlistwidget.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    SetUi();
    SetSelectionMenu();
}

void MainWindow::SetUi(){
    ui->toolButton->setDefaultAction(ui->a1);
    ui->toolButton_2->setDefaultAction(ui->a2);
    ui->toolButton_3->setDefaultAction(ui->a3);
    ui->toolButton_4->setDefaultAction(ui->a4);
    ui->toolButton_5->setDefaultAction(ui->a5);
    ui->toolButton_8->setDefaultAction(ui->a6);
    ui->toolButton_9->setDefaultAction(ui->a7);
    ui->toolButton_10->setDefaultAction(ui->a10);
}

void MainWindow::SetSelectionMenu(){
    QMenu* menu = new QMenu(this);
    menu->addAction(ui->a6);
    menu->addAction(ui->a7);
    menu->addAction(ui->a8);

    ui->toolButton_11->setDefaultAction(ui->a10);
    ui->toolButton_11->setMenu(menu);

    QToolButton* tbtn = new QToolButton(this);
    tbtn->setPopupMode(QToolButton::InstantPopup);
    tbtn->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
    tbtn->setDefaultAction(ui->a10);
    tbtn->setMenu(menu);
    ui->toolBar->addSeparator();
    ui->toolBar->addWidget(tbtn);

    ui->toolBar->addSeparator();
    ui->toolBar->addAction(ui->a9);

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_a1_triggered()
{
    QListWidgetItem * aItem;
    QIcon  aIcon;
    aIcon.addFile(":/icons/moon.ico");
    bool chk = ui->checkBox->isChecked();

    ui->listWidget->clear();
    for(int i=0;i<10;i++){
        QString str = QString("Item %1").arg(i);
        aItem = new QListWidgetItem();
        aItem->setText(str);
        aItem->setIcon(aIcon);

        aItem->setCheckState(Qt::Checked);
        if(chk){
            aItem->setFlags(Qt::ItemIsSelectable | Qt::ItemIsEditable
                            |Qt::ItemIsUserCheckable |Qt::ItemIsEnabled);
        }
        else{
            aItem->setFlags(Qt::ItemIsSelectable |Qt::ItemIsUserCheckable
                            |Qt::ItemIsEnabled);
        }
        ui->listWidget->addItem(aItem);
    }
}

void MainWindow::on_a2_triggered()
{
    ui->listWidget->clear();
}




void MainWindow::on_a3_triggered()
{
    QIcon aicon(":/icons/full_moon.ico");
    bool chk = ui->checkBox->isChecked();
    QListWidgetItem * aItem = new QListWidgetItem("Inserted Item");
    aItem->setIcon(aicon);
    aItem->setCheckState(Qt::Checked);
    if(chk){
        aItem->setFlags(Qt::ItemIsSelectable | Qt::ItemIsEditable
                        |Qt::ItemIsUserCheckable |Qt::ItemIsEnabled);
    }
    else{
        aItem->setFlags(Qt::ItemIsSelectable |Qt::ItemIsUserCheckable
                        |Qt::ItemIsEnabled);
    }
    ui->listWidget->insertItem(ui->listWidget->currentRow(),aItem);
}


void MainWindow::on_a4_triggered()
{
    QIcon aicon(":/icons/full_moon.ico");
    bool chk = ui->checkBox->isChecked();
    QListWidgetItem* aItem= new QListWidgetItem("Added Item");
    aItem->setIcon(aicon);
    aItem->setCheckState(Qt::Checked);
    if(chk){
        aItem->setFlags(Qt::ItemIsSelectable | Qt::ItemIsEditable
                        |Qt::ItemIsUserCheckable |Qt::ItemIsEnabled);
    }
    else{
        aItem->setFlags(Qt::ItemIsSelectable |Qt::ItemIsUserCheckable
                        |Qt::ItemIsEnabled);
    }
    ui->listWidget->addItem(aItem);
}
void MainWindow::on_a5_triggered()
{
    QListWidgetItem* aItem = ui->listWidget->currentItem();
    delete aItem;
}


void MainWindow::on_a6_triggered()
{
    QListWidgetItem *aItem;
    int cnt = ui->listWidget->count();
    for(int i=0;i<cnt;i++){
        aItem = ui->listWidget->item(i);
        if(aItem->checkState() != Qt::Checked){aItem->setCheckState(Qt::Checked);}
    }
}


void MainWindow::on_a7_triggered()
{
    QListWidgetItem *aItem;
    int cnt = ui->listWidget->count();
    for(int i=0;i<cnt;i++){
        aItem = ui->listWidget->item(i);
        if(aItem->checkState() != Qt::Unchecked){aItem->setCheckState(Qt::Unchecked);}
    }
}


void MainWindow::on_a8_triggered()
{
    QListWidgetItem *aItem;
    int cnt = ui->listWidget->count();
    for(int i=0;i<cnt;i++){
        aItem = ui->listWidget->item(i);
        if(aItem->checkState() != Qt::Checked){aItem->setCheckState(Qt::Checked);}
        else{aItem->setCheckState(Qt::Unchecked);}
    }
}




void MainWindow::on_toolButton_6_clicked()
{
    ui->listWidget->sortItems(Qt::AscendingOrder);
}


void MainWindow::on_toolButton_7_clicked()
{
    ui->listWidget->sortItems(Qt::DescendingOrder);
}


void MainWindow::on_checkBox_2_clicked(bool checked)
{
    ui->listWidget->setSortingEnabled(checked);
}


void MainWindow::on_listWidget_currentItemChanged(QListWidgetItem *current, QListWidgetItem *previous)
{
    QString str;
    if(current != nullptr){
        if(previous == nullptr){str = "当前："+ current->text();}
        else {str = "前一项："+ previous->text()+"; 当前项："+current->text();}
    }
    ui->lineEdit->setText(str);
    ui->lineEdit->show();
}


void MainWindow::on_listWidget_currentRowChanged(int currentRow)
{
    ui->lineEdit->setText(QString("currentRowChanged()信号被发射，currentRow=%1").arg(currentRow ));
    ui->lineEdit->show();
}



void MainWindow::on_listWidget_currentTextChanged(const QString &currentText)
{
    ui->lineEdit->setText( "currentTextChanged()信号被发射，currentText="+currentText    );
    ui->lineEdit->show();
}


void MainWindow::on_listWidget_customContextMenuRequested(const QPoint &pos)
{
    Q_UNUSED(pos);
    QMenu* menulist = new QMenu(this);
    menulist->addAction(ui->a1);
    menulist->addAction(ui->a2);
    menulist->addAction(ui->a3);
    menulist->exec(QCursor::pos());
    delete menulist;
}

