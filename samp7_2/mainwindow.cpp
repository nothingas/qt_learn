#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    model = new QStandardItemModel();
    model->setRowCount(6);
    model->setColumnCount(4);

    QStringList header;
    header<<"姓名"<<"性别"<<"学位"<<"部门";
    model->setHorizontalHeaderLabels(header);
    m_selection = new QItemSelectionModel(model);

    ui->tableView->setModel(model);
    ui->tableView->setSelectionModel(m_selection);

    labpos = new QLabel("当前单元格：",this);
    labpos->setMinimumWidth(180);
    labpos->setAlignment(Qt::AlignHCenter);
    labtext = new QLabel("单元格内容：",this);
    labtext->setMaximumWidth(200);
    labtext->setAlignment(Qt::AlignHCenter);

    ui->statusbar->addWidget(labpos);
    ui->statusbar->addWidget(labtext);

    connect(m_selection,&QItemSelectionModel::currentChanged,this,&MainWindow::do_model_currentChange);
    //connect(this, &QMainWindow::cellindexchange,dlglocate, &TDialogLocate::setSpinValue  );
}

void MainWindow::do_model_currentChange(const QModelIndex &current, const QModelIndex &previous)
{
    Q_UNUSED(previous)
    if(current.isValid())
    {
        labpos->setText(QString::asprintf("当前单元格：%d 行，%d 列", current.row(),current.column()) );
        QStandardItem *aItem;
        aItem = model->itemFromIndex(current);
        this->labtext->setText("单元格内容："+aItem->text());
    }
}

void MainWindow::closeEvent(QCloseEvent *event)
{
    QMessageBox::StandardButton result;
    result= QMessageBox::question(this, "确认", "确定要退出本程序吗？");
    if(result == QMessageBox::Yes){event->accept();}
    else{event->ignore();}
}
MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_action1_triggered()
{
    TDialogsize *dlgTableSize= new TDialogsize(this);
    dlgTableSize->setWindowFlag(Qt::MSWindowsFixedSizeDialogHint);

    dlgTableSize->setrowcolumn(model->rowCount(), model->columnCount());
    int ret = dlgTableSize->exec();
    if(ret == QDialog::Accepted)
    {
        int row = dlgTableSize->rowcount();
        int col = dlgTableSize->columncount();
        model->setRowCount(row);
        model->setColumnCount(col);
    }
    delete dlgTableSize;
}


void MainWindow::on_action2_triggered()
{
    if(dlgsetHeaders == nullptr){dlgsetHeaders = new TDialogHeaders(this);}
    if(dlgsetHeaders->headerList().size() != model->columnCount())
    {
        QStringList strlist;
        for(int i=0;i<model->columnCount();i++){
            strlist.append(model->headerData(i,Qt::Horizontal,Qt::DisplayRole).toString());
        }
        dlgsetHeaders->setHeaderList(strlist);
    }

    int ret = dlgsetHeaders->exec();
    if(ret == QDialog::Accepted)
    {
        QStringList strlist = dlgsetHeaders->headerList();
        model->setHorizontalHeaderLabels(strlist);
    }

}

void MainWindow::do_setcelltext(int row, int column, QString &text)
{
    QModelIndex index = model->index(row, column);
    m_selection->clearSelection();
    m_selection->setCurrentIndex(index, QItemSelectionModel::Select);
    model->setData(index,text,Qt::DisplayRole);
}


void MainWindow::on_action4_triggered()
{
    close();
}


void MainWindow::on_tableView_clicked(const QModelIndex &index)
{
    emit cellindexchange(index.row(),index.column());
}


void MainWindow::on_action3_triggered()
{
    TDialogLocate *dlglocate = new TDialogLocate(this);
    dlglocate->setSpinRange(model->rowCount(), model->columnCount());
    QModelIndex curidx = m_selection->currentIndex();
    if(curidx.isValid()){dlglocate->setSpinValue(curidx.row(),curidx.column());}
    connect(dlglocate, &TDialogLocate::changeCellText,this,&MainWindow::do_setcelltext);
    connect(dlglocate, &TDialogLocate::changeActionEnable, ui->action3, &QAction::setEnabled);
    connect(this, &MainWindow::cellindexchange,dlglocate,&TDialogLocate::setSpinValue);
    dlglocate->setModal(false);
    dlglocate->show();
}

