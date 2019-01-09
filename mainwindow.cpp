#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QNetworkInterface>
#include <QUdpSocket>
#include <QString>
#include <QStringList>
#include <QRegularExpression>
#include <QByteArrayList>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
   
        QList<QHostAddress> list = QNetworkInterface::allAddresses();
        foreach (const QHostAddress &address, QNetworkInterface::allAddresses()) {
                        if (address.protocol() == QAbstractSocket::IPv4Protocol && address != QHostAddress(QHostAddress::LocalHost))
                        string = address.toString();
                        ui->iplocal->setText(string);
      }

        QHostAddress address(QHostAddress::Any);
        address.setAddress(string);
        socket = new QUdpSocket(this);
        socket->bind(address , 30000);
        statusBar()->showMessage(tr("Desconectado!!"));
        connect(socket, SIGNAL(readyRead()), this, SLOT(processPendingDatagrams()),Qt::QueuedConnection);

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::processPendingDatagrams()
 {

    QHostAddress sender;
     uint16_t port;
     QByteArray datagram;
     QString dato1;
     QString dato2;
     datagram.resize(socket->pendingDatagramSize());    

    if ( datagram.size() > 0 ){
        socket->readDatagram(datagram.data(),datagram.size(),&sender,&port);
        ui->IP->setText(sender.toString());             
        QString recibido_socket(datagram);              
        QStringList datos = recibido_socket.split(","); 
        ui->l1->setText(datos[0]);
        ui->l2->setText(datos[1]);
        statusBar()->showMessage(tr(" Conectado en puerto %1").arg(port));

    }
}
