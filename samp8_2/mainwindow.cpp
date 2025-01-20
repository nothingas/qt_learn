#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->tabWidget->setTabsClosable(false);
    ui->tabWidget->setDocumentMode(true);
    this->setCentralWidget(ui->tabWidget);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_action1_triggered()
{
    QString curpath = QDir::currentPath();
    QString dlgTitle = "打开一个文件";
    QString filter = "所有文件(*.*)";
    QString aFilename = QFileDialog::getOpenFileName(this,dlgTitle,curpath,filter);
    if(aFilename.isEmpty()){return;}
    QFileInfo fileinfo(aFilename);
    QDir::setCurrent(fileinfo.absolutePath());
    //openByIO_whole(aFilename);
    openByIO_lines(aFilename);
}

void MainWindow::print1(const QString &str)
{
    //qDebug("%s",str);
    ui->plainTextEdit->setPlainText(str);
    ui->tabWidget->setCurrentIndex(0);
}

bool MainWindow::openByIO_whole(const QString &str)
{
    QFile f(str);
    if(!f.exists())return false;
    if(!f.open(QIODevice::ReadOnly | QIODevice::Text))return false;
    QByteArray all_lines = f.readAll();
    QString text(all_lines);
    print1(text);
    f.close();
    return true;
}

bool MainWindow::openByIO_lines(const QString &str)
{
    QFile f(str);
    if(!f.exists())return false;
    if(!f.open(QIODevice::ReadOnly | QIODevice::Text))return false;

    while(!f.atEnd())
    {
        QByteArray line = f.readLine();
        QString str = QString::fromUtf8(line);
        str.truncate(str.length()-1);
        ui->plainTextEdit->appendPlainText(str);
    }
    f.close();
    ui->tabWidget->setCurrentIndex(0);
    return true;
}

void MainWindow::on_action2_triggered()
{
    QString curpath = QDir::currentPath();
    QString dlgtitle = "另存为一个文件";
    QString filter = "所有文件(*.*)";
    QString f = QFileDialog::getSaveFileName(this,dlgtitle,curpath,filter);
    if(f.isEmpty())return;
    QFileInfo fileinfo(f);
    QDir::setCurrent(fileinfo.absolutePath());
    saveByIO_whole(f);
}

bool MainWindow::saveByIO_whole(const QString &str)
{
    QFile f(str);
    if(!f.open(QIODevice::WriteOnly | QIODevice::Text))return false;
    QString s = ui->plainTextEdit->toPlainText();
    QByteArray strbytes = s.toUtf8();
    f.write(strbytes,strbytes.length());
    f.close();
    ui->tabWidget->setCurrentIndex(0);
    return true;
}

void MainWindow::on_action3_triggered()
{
    QString curPath= QDir::currentPath();
    QString dlgTitle= "另存为一个文件";
    QString filter= "所有文件(*.*)";
    QString aFileName= QFileDialog::getSaveFileName(this,dlgTitle,curPath,filter);
    if(aFileName.isEmpty())return;
    QFileInfo info(aFileName);
    QDir::setCurrent(info.absolutePath());
    saveByIO_Safe(aFileName);
}

bool MainWindow::saveByIO_Safe(const QString &str)
{
    QSaveFile sf(str);
    if(!sf.open(QIODevice::WriteOnly | QIODevice::Text))return false;
    sf.setDirectWriteFallback(false);
    try
    {
        QString s = ui->plainTextEdit->toPlainText();
        QByteArray bs = s.toUtf8();
        sf.write(bs,bs.length());
        sf.commit();
        ui->tabWidget->setCurrentIndex(0);
        return true;
    }
    catch(QException &e)
    {
        qDebug("保存文件的过程发生了错误");
        sf.cancelWriting();
        return false;
    }
}




void MainWindow::on_action4_triggered()
{
    QString curPath= QDir::currentPath();
    QString aFileName= QFileDialog::getOpenFileName(this,"打开一个文件",curPath,
                                                     "程序文件(*.h *cpp);;文本文件(*.txt);;所有文件(*.*)");
    if (aFileName.isEmpty())
        return;
    QFileInfo fileInfo(aFileName);
    QDir::setCurrent(fileInfo.absolutePath());
    openByStream_Lines(aFileName);
}

bool MainWindow::openByStream_Lines(const QString &aFileName)
{
    QFile f(aFileName);
    if(!f.exists())return false;
    if(!f.open(QIODevice::ReadOnly|QIODevice::Text))return false;
    QTextStream s(&f);
    s.setAutoDetectUnicode(true);
    ui->plainTextEdit_2->clear();
    while(!s.atEnd()){
        QString str = s.readLine();
        ui->plainTextEdit_2->appendPlainText(str);
    }
    ui->tabWidget->setCurrentIndex(1);
    return true;

}


