#include "tformdoc.h"
#include "ui_tformdoc.h"

TFormDoc::TFormDoc(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::TFormDoc)
{
    ui->setupUi(this);
    this->setWindowTitle("New Doc[*]");
    //设置窗口标题，设置了修改标记占位符
    this->setAttribute(Qt::WA_DeleteOnClose);
    //关闭时自动删除
    connect(ui->plainTextEdit, &QPlainTextEdit::modificationChanged,
            this, &QWidget::setWindowModified);
}

TFormDoc::~TFormDoc()
{
    delete ui;
}

void TFormDoc::loadFromFile(QString &aFileName)
{//打开一个文件
    QFile aFile(aFileName);
    if (aFile.open(QIODevice::ReadOnly | QIODevice::Text))
    //以只读文本方式打开文件
    {
        QTextStream aStream(&aFile);
        //用文本流读取文件
        ui->plainTextEdit->clear();
        ui->plainTextEdit->setPlainText(aStream.readAll());
        aFile.close();
        m_filename= aFileName;
        QFileInfo
            fileInfo(aFileName);
        QString str= fileInfo.fileName();
        this->setWindowTitle(str+"[*]");
        m_fileOpened =true;
        //保存当前文件名
        //文件信息
        //去除路径后的文件名
        //设置修改标记占位符
        //已打开文件
    }
}

void TFormDoc::saveToFile()
{//没有执行具体的保存操作
    this->setWindowModified(false);
}

QString TFormDoc::currentFileName()
{
    return m_filename;
}

bool TFormDoc::isFileOpened()
{
    return m_fileOpened;
}

void TFormDoc::setEditFont()
{
    QFont font= ui->plainTextEdit->font();
    bool ok;
    font= QFontDialog::getFont(&ok,font);
    ui->plainTextEdit->setFont(font);
}

void TFormDoc::textCut()
{
    ui->plainTextEdit->cut();
}
void TFormDoc::textCopy()
{
    ui->plainTextEdit->copy();
}
void TFormDoc::textPaste()
{
    ui->plainTextEdit->paste();
}






















