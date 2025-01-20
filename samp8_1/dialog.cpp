#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dialog)
{
    ui->setupUi(this);
    this->setWindowFlag(Qt::Window);
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::show_btn_info(QObject *btn)
{
    QPushButton* thebtn = static_cast<QPushButton*>(btn);
    ui->plainTextEdit->appendPlainText(thebtn->text());
    ui->plainTextEdit->appendPlainText(thebtn->toolTip()+"\n");
}

void Dialog::print(QString str)
{
    ui->plainTextEdit->appendPlainText(str+"\n");
}
QString Dialog::get1(){return ui->lineEdit->text();}
QString Dialog::get2(){return ui->lineEdit_2->text();}


void Dialog::on_pushButton_19_clicked()
{
    show_btn_info(sender());
    QString str = QCoreApplication::applicationName();
    print(str);
}


void Dialog::on_pushButton_20_clicked()
{
    show_btn_info(sender());
    QCoreApplication::setOrganizationName("Org");
    QString str = QCoreApplication::organizationName();
    print(str);
}


void Dialog::on_pushButton_21_clicked()
{
    show_btn_info(sender());
    QString sous = get1();
    if(QFile::exists(sous))
    {
        QFile::moveToTrash("文件移除到回收站："+sous);
    }
    else{print("文件不存在");}
}


void Dialog::on_pushButton_22_clicked()
{
    show_btn_info(sender());
}


void Dialog::on_pushButton_23_clicked()
{
    show_btn_info(sender());
    QString sous = get1();
    QFile f(sous);
    f.remove();
    print("删除文件："+sous);
}


void Dialog::on_clear_clicked()
{
    ui->plainTextEdit->clear();
}


void Dialog::on_pushButton_clicked()
{
    show_btn_info(sender());
    QFileInfo info(get1());
    if(info.exists())
    {print(info.path());}
    else {print("NO SUCH FILE");}
}


void Dialog::on_pushButton_24_clicked()
{
    show_btn_info(sender());
    QFileInfoList drivelist = QDir::drives();
    for(int i=0;i<drivelist.size();i++){print(drivelist.at(i).path() );}

}


void Dialog::on_pushButton_25_clicked()
{
    show_btn_info(sender());
    QDir dir(get1());
    QStringList l = dir.entryList(QDir::Dirs | QDir::NoDotAndDotDot);
    for(int i=0;i<l.size();i++)
    {
        print(l.at(i));
    }
}


void Dialog::on_pushButton_26_clicked()
{
    show_btn_info(sender());
    print("QDir::tempPath()= " + QDir::tempPath());
    QTemporaryDir dir;
    dir.setAutoRemove(true);
    print(dir.path());
}


void Dialog::on_pushButton_29_clicked()
{
    show_btn_info(sender());
    print("QDir::tempPath()= " + QDir::tempPath());
    QTemporaryFile aFile;
    aFile.setAutoRemove(true);
    aFile.open();
    print(aFile.fileName());
    aFile.close();
}

void Dialog::do_directoryChanged(const QString &path)
{
    print(path);
    print("目录发生了变化");
}

void Dialog::do_fileChanged(const QString &path)
{
    print(path);
    print("文件发生了变化");
}




void Dialog::on_pushButton_32_clicked()
{
    show_btn_info(sender());
    print("监视目录：" + get2());
    fileWatcher.addPath(get2());
    fileWatcher.addPath(get1());
    connect(&fileWatcher,&QFileSystemWatcher::directoryChanged,
            this,&Dialog::do_directoryChanged);
    connect(&fileWatcher,&QFileSystemWatcher::fileChanged,
                this,&Dialog::do_fileChanged);
}

