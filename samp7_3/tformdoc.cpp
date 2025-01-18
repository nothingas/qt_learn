#include "tformdoc.h"
#include "ui_tformdoc.h"

TFormDoc::TFormDoc(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::TFormDoc)
{
    ui->setupUi(this);
    QToolBar* locToolBar = new QToolBar("文档" , this);
    locToolBar->addAction(ui->actOpen);
    locToolBar->addAction(ui->actFont);
    locToolBar->addSeparator();
    locToolBar->addAction(ui->actCut);
    locToolBar->addAction(ui->actCopy);
    locToolBar->addAction(ui->actUndo);
    locToolBar->addAction(ui->actRedo);
    locToolBar->addSeparator();
    locToolBar->addAction(ui->actClose);
    locToolBar->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);

    QVBoxLayout *Layout = new QVBoxLayout();
    Layout->addWidget(locToolBar);
    Layout->addWidget(ui->plainTextEdit);
    Layout->setContentsMargins(2,2,2,2);
    Layout->setSpacing(2);
    this->setLayout(Layout);
}

TFormDoc::~TFormDoc()
{
    delete ui;
}


void TFormDoc::on_actOpen_triggered()
{
    QString curPath = QDir::currentPath();
    QString aFileName = QFileDialog::getOpenFileName(this, "打开一个文件",curPath,"C 程序文件(*.h *cpp);;文本文件(*.txt);;所有文件(*.*)");
    if(aFileName.isEmpty())return;
    loadFromFile(aFileName);
}

void TFormDoc::loadFromFile(QString &aFileName)
{
    QFile aFile(aFileName);
    if(aFile.open(QIODevice::ReadOnly | QIODevice::Text))
    {
        QTextStream aStream(&aFile);
        ui->plainTextEdit->clear();
        while(!aStream.atEnd())
        {
            QString str = aStream.readLine();
            ui->plainTextEdit->appendPlainText(str);
        }
        aFile.close();

        QFileInfo fileInfo(aFileName);
        QString shortName = fileInfo.fileName();
        this->setWindowTitle(shortName);
        emit titleChanged(shortName);
    }
}


void TFormDoc::on_actFont_triggered()
{
    QFont font= ui->plainTextEdit->font();
    bool ok;
    font= QFontDialog::getFont(&ok,font);
    ui->plainTextEdit->setFont(font);
}

