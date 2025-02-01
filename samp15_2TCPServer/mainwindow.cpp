#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    labListen = new QLabel("监听状态:");
    labListen->setMinimumWidth(150);
    ui->statusbar->addWidget(labListen);

    labSocketState = new QLabel("socket 状态：");
    labSocketState->setMinimumWidth(200);
    ui->statusbar->addWidget(labSocketState);

    QString localIp = getLocalIP();
    this->setWindowTitle(this->windowTitle()+"----本机 IP 地址："+localIp);
    ui->comboBox->addItem(localIp);
    tcpServer = new QTcpServer(this);
    connect(tcpServer,SIGNAL(newConnection()),this,SLOT(do_newConnection()));
}

MainWindow::~MainWindow()
{
    if(tcpSocket != nullptr)
    {
        if (tcpSocket->state() == QAbstractSocket::ConnectedState)
            tcpSocket->disconnectFromHost();
    }
    if(tcpServer->isListening())tcpServer->close();
    delete ui;
}

QString MainWindow::getLocalIP()
{
    QString hostName = QHostInfo::localHostName();
    QHostInfo hostInfo= QHostInfo::fromName(hostName);
    QString localIP= "";
    QList<QHostAddress> addrList= hostInfo.addresses();
    if(addrList.isEmpty())return localIP;
    foreach(QHostAddress aHost, addrList)
        if(QAbstractSocket::IPv4Protocol == aHost.protocol())
        {
            localIP = aHost.toString();
            break;
        }
    return localIP;
}

void MainWindow::on_actionbegin_triggered()
{
    QString IP = ui->comboBox->currentText();
    quint16 port = ui->spinBox->value();
    QHostAddress address(IP);
    tcpServer->listen(address,port);
    ui->plainTextEdit->appendPlainText("**开始监听...");
    ui->plainTextEdit->appendPlainText("**服务器地址："+tcpServer->serverAddress().toString());
    ui->plainTextEdit->appendPlainText("**服务器端口：" +QString::number(tcpServer->serverPort()));
    ui->actionbegin->setEnabled(false);
    ui->actionstop->setEnabled(true);
    labListen->setText("监听状态：正在监听");
}

void MainWindow::do_newConnection()
{
    tcpSocket = tcpServer->nextPendingConnection();
    connect(tcpSocket,SIGNAL(connected()),this,SLOT(do_clientConnected()));
    do_clientConnected();
    connect(tcpSocket, SIGNAL(disconnected()),this, SLOT(do_clientDisconnected()));
    connect(tcpSocket,&QTcpSocket::stateChanged,this,&MainWindow::do_socketStateChange);
    do_socketStateChange(tcpSocket->state());
    connect(tcpSocket,SIGNAL(readyRead()), this,SLOT(do_socketReadyRead()));
}

void MainWindow::do_clientConnected()
{
    ui->plainTextEdit->appendPlainText("**client socket connected");
    ui->plainTextEdit->appendPlainText("**peer address:"+tcpSocket->peerAddress().toString());
    ui->plainTextEdit->appendPlainText("**peer port:"+QString::number(tcpSocket->peerPort()));
}

void MainWindow::do_clientDisconnected()
{
    ui->plainTextEdit->appendPlainText("**client socket disconnected");
    tcpSocket->deleteLater();
}

void MainWindow::do_socketStateChange(QAbstractSocket::SocketState socketState)
{
    switch (socketState)
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

void MainWindow::on_actionstop_triggered()
{
    if(tcpServer->isListening())
    {
        if(tcpSocket != nullptr)
        {if(tcpSocket->state() == QAbstractSocket::ConnectedState)tcpSocket->disconnectFromHost();}

        tcpServer->close();
        ui->actionbegin->setEnabled(true);
        ui->actionstop->setEnabled(false);
        labListen->setText("监听状态：已停止监听");
    }


}


void MainWindow::on_pushButton_clicked()
{
    QString msg = ui->lineEdit->text();
    ui->plainTextEdit->appendPlainText("[out] "+msg);
    ui->lineEdit->clear();
    ui->lineEdit->setFocus();
    QByteArray str= msg.toUtf8();
    str.append('\n');
    if(tcpSocket != nullptr)
    tcpSocket->write(str);
    else
    ui->plainTextEdit->appendPlainText("TcpSocket is nullptr");
}

void MainWindow::do_socketReadyRead()
{
    while(tcpSocket->canReadLine())
    {ui->plainTextEdit->appendPlainText("[in] "+tcpSocket->readLine());}
}
