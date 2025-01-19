#include "tdialoglogin.h"
#include "ui_tdialoglogin.h"

TDialogLogin::TDialogLogin(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::TDialogLogin)
{
    ui->setupUi(this);
    ui->lineEdit_2->setEchoMode(QLineEdit::Password);
    this->setAttribute(Qt::WA_DeleteOnClose);
    this->setWindowFlags(Qt::SplashScreen);
    QApplication::setOrganizationName("WWB-Qt");
    //设置组织名
    QApplication::setApplicationName("samp7_5");
    //设置应用程序名
    readSettings();
}

TDialogLogin::~TDialogLogin()
{
    delete ui;
}

void TDialogLogin::readSettings()
{
    QSettings settings;
    bool saved = settings.value("saved",false).toBool();
    m_user = settings.value("Username", "user").toString();
    QString defaultPSWD= encrypt("12345");
    m_pswd = settings.value("PSWD", defaultPSWD).toString();
    if(saved){ui->lineEdit->setText(m_user);}
    ui->checkBox->setChecked(saved);
}

void TDialogLogin::writeSettings()
{
    QSettings settings;
    settings.setValue("Username", m_user);
    settings.setValue("PSWD", m_pswd);
    settings.setValue("saved", ui->checkBox->isChecked());
}

QString TDialogLogin::encrypt(const QString &str)
{
    QByteArray btarray = str.toLocal8Bit();
    QCryptographicHash hash(QCryptographicHash::Md5);
    hash.addData(btarray);
    QByteArray resarray = hash.result();
    QString md5 = resarray.toHex();
    return md5;
}
void TDialogLogin::on_pushButton_clicked()
{
    QString user = ui->lineEdit->text().trimmed();
    QString pswd = ui->lineEdit_2->text().trimmed();
    QString encrptPSWD = encrypt(pswd);
    if( (user == m_user) && (encrptPSWD == m_pswd) ){writeSettings();this->accept();}
    else
    {
        m_tryCount++;
        if(m_tryCount++>3){
            QMessageBox::critical(this, "错误", "输入错误次数太多，强行退出");
            this->reject();
        }
        else
        {QMessageBox::warning(this, "错误提示", "用户名或密码错误");}
    }
}

void TDialogLogin::mousePressEvent(QMouseEvent *event)
{
    if(event->button() == Qt::LeftButton)
    {
        m_moving = true;
        m_lastPos = event->globalPosition().toPoint()-this->pos();
    }
    return QDialog::mousePressEvent(event);
}

void TDialogLogin::mouseMoveEvent(QMouseEvent *event)
{
    QPoint eventPos =event->globalPosition().toPoint();
    if(m_moving && (event->buttons() & Qt::LeftButton) && (eventPos -m_lastPos).manhattanLength() > QApplication::startDragDistance())
    {
        move(eventPos - m_lastPos);
        m_lastPos = eventPos - m_lastPos;
    }
    return QDialog::mouseMoveEvent(event);
}

void TDialogLogin::mouseReleaseEvent(QMouseEvent *event)
{
    m_moving = false;
    event->accept();
}










