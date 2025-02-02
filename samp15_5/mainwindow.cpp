#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_2_clicked()
{
    QString curPath = QDir::currentPath();
    QDir dir(curPath);
    QString sub = "temp";
    dir.mkdir(sub);
    ui->lineEdit_2->setText(curPath+"/"+sub+"/");
}


void MainWindow::on_pushButton_clicked()
{
    QString urlSpec = ui->lineEdit->text().trimmed();
    if(urlSpec.isEmpty())
    {
        QMessageBox::information(this, "错误","请指定需要下载的 URL");
        return;
    }
    QUrl newUrl = QUrl::fromUserInput(urlSpec);
    if(!newUrl.isValid())
    {
        QString info= "无效 URL:"+urlSpec+"\n 错误信息:"+newUrl.errorString();
        QMessageBox::information(this, "错误",info);
        return;
    }
    QString tempDir = ui->lineEdit_2->text().trimmed();
    if(tempDir.isEmpty())
    {
        QMessageBox::information(this, "错误", "请指定保存下载文件的目录");
        return;
    }
    QString fullFileName= tempDir+newUrl.fileName();
    if (QFile::exists(fullFileName))
        QFile::remove(fullFileName);
    downloadedFile= new QFile(fullFileName);
    if (!downloadedFile->open(QIODevice::WriteOnly))
    {
        QMessageBox::information(this, "错误","临时文件打开错误");
        return;
    }
    ui->pushButton->setEnabled(false);
    reply = networkManager.get(QNetworkRequest(newUrl));
    connect(reply,SIGNAL(readyRead()),this,SLOT(do_readyRead()));
    connect(reply,SIGNAL(downloadProgress(qint64,qint64)),this,SLOT(do_downloadProgress(qint64,qint64)));
    connect(reply, SIGNAL(finished()), this, SLOT(do_finished()));
}
void MainWindow::do_readyRead()
{
    downloadedFile->write(reply->readAll());
}

void MainWindow::do_downloadProgress(qint64 bytesRead, qint64 totalBytes)
{
    ui->progressBar->setMaximum(totalBytes);
    ui->progressBar->setValue(bytesRead);
}

void MainWindow::do_finished()
{
    QFileInfo fileInfo(downloadedFile->fileName());
    downloadedFile->close();
    delete downloadedFile;
    reply->deleteLater();
    if(ui->checkBox->isChecked())
        QDesktopServices::openUrl(QUrl::fromLocalFile(fileInfo.absoluteFilePath()));
    ui->pushButton->setEnabled(true);
}






