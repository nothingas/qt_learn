#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QFileSystemModel *model = new QFileSystemModel(this);
    model->setRootPath(QDir::currentPath());
    ui->treeView->setModel(model);
    ui->listView->setModel(model);
    ui->tableView->setModel(model);
    connect(ui->treeView,SIGNAL(clicked(QModelIndex)), ui->listView, SLOT(setRootIndex(QModelIndex)));
    connect(ui->treeView, SIGNAL(clicked(QModelIndex)),ui->tableView,SLOT(setRootIndex(QModelIndex)) );
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_treeView_clicked(const QModelIndex &index)
{
    ui->checkBox_2->setChecked(model->isDir(index));
    ui->label_4->setText(model->filePath(index));
    ui->label_3->setText(model->type(index));
    ui->label->setText(model->fileName(index));
    int sz = model->size(index)/1024;
    if(sz<1024){ui->label_2->setText(QString("%1 KB").arg(sz));}
    else{ui->label_2->setText(QString::asprintf("%.1f MB", sz/1240.0));}
}


void MainWindow::on_action2_triggered()
{
    close();
}


void MainWindow::on_action_triggered()
{
    QString dir = QFileDialog::getExistingDirectory(this, "选择目录", QDir::currentPath());
    if(! dir.isEmpty()){
        model->setRootPath(dir);
        ui->treeView->setRootIndex(model->index(dir));
    }
}


void MainWindow::on_radioButton_clicked()
{
    model->setFilter(QDir::AllDirs | QDir::Files |QDir::NoDotAndDotDot);
}


void MainWindow::on_radioButton_2_clicked()
{
    model->setFilter(QDir::AllDirs | QDir::NoDotAndDotDot);
}


void MainWindow::on_checkBox_clicked(bool checked)
{
    model->setNameFilterDisables(!checked);
    ui->comboBox->setEnabled(checked);
    ui->pushButton->setEnabled(checked);
}


void MainWindow::on_pushButton_clicked()
{
    QString flts = ui->comboBox->currentText().trimmed();
    QStringList filters = flts.split(";", Qt::SkipEmptyParts);
    model->setNameFilters(filters);
}

