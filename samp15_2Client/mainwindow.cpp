#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    tcpClient = new QTcpSocket(this);
    labSocketState = new QLabel("socket 状态：");
    labSocketState->setMinimumWidth(250);
    ui->statusbar->addWidget(labSocketState);
    QString localIP = getLocalIP();
    this->setWindowTitle(this->windowTitle()+"----本机 IP 地址："+localIP);
    ui->comboBox->addItem(localIP);

    connect(tcpClient,SIGNAL(connected()),this,SLOT(do_connected()));
    connect(tcpClient,SIGNAL(disconnected()),this,SLOT(do_disconnected()));
    connect(tcpClient,&QTcpSocket::stateChanged,this,&MainWindow::do_socketStateChange);
    connect(tcpClient,SIGNAL(readyRead()),this,SLOT(do_socketReadyRead()));
}

MainWindow::~MainWindow()
{
    delete ui;
}
QString MainWindow::getLocalIP()
{
    QString hostName= QHostInfo::localHostName();
    //本机主机名
    QHostInfo hostInfo= QHostInfo::fromName(hostName);
    QString localIP= "";
    QList<QHostAddress> addrList= hostInfo.addresses();
    if (addrList.isEmpty())
        return localIP;
    foreach(QHostAddress aHost, addrList)
        if (QAbstractSocket::IPv4Protocol == aHost.protocol())
        {
            localIP= aHost.toString();
            break;
        }
    return localIP;
}


void MainWindow::out(const QString str)
{
    ui->plainTextEdit->appendPlainText(str);
}

void MainWindow::on_actionconnect_triggered()
{
    QString addr = ui->comboBox->currentText();
    quint16 port = ui->spinBox->value();
    tcpClient->connectToHost(addr,port);
}




void MainWindow::on_actiondisconnect_triggered()
{
    if(tcpClient->state() == QAbstractSocket::ConnectedState)
        tcpClient->disconnectFromHost();
}

void MainWindow::do_connected()
{
    out("**已连接到服务器");
    out("**peer address:"+tcpClient->peerAddress().toString());
    out("**peer port:"+QString::number(tcpClient->peerPort()));
    ui->actionconnect->setEnabled(true);
    ui->actiondisconnect->setEnabled(false);
}

void MainWindow::do_disconnected()
{
    out("**已断开与服务器的连接");
    ui->actionconnect->setEnabled(true);
    ui->actiondisconnect->setEnabled(false);
}



void MainWindow::on_pushButton_clicked()
{
    QString msg = ui->lineEdit->text();
    out("[out] "+msg);
    ui->lineEdit->clear();
    ui->lineEdit->setFocus();
    QByteArray str = msg.toUtf8();
    str.append('\n');
    tcpClient->write(str);
}

void MainWindow::do_socketReadyRead()
{
    while(tcpClient->canReadLine())
        out("[in] "+tcpClient->readLine());
}

void MainWindow::do_socketStateChange(QAbstractSocket::SocketState socketState)
{
    switch(socketState)
    {
    case QAbstractSocket::UnconnectedState:
        labSocketState->setText("socket 状态：UnconnectedState");
        break;
    case QAbstractSocket::HostLookupState:
        labSocketState->setText("socket 状态：HostLookupState");
        break;
    case QAbstractSocket::ConnectingState:
        labSocketState->setText("socket 状态：ConnectingState");
        break;
    case QAbstractSocket::ConnectedState:
        labSocketState->setText("socket 状态：ConnectedState");
        break;
    case QAbstractSocket::BoundState:
        labSocketState->setText("socket 状态：BoundState");
        break;
    case QAbstractSocket::ClosingState:
        labSocketState->setText("socket 状态：ClosingState");
        break;
    case QAbstractSocket::ListeningState:
        labSocketState->setText("socket 状态：ListeningState");
    }
}
