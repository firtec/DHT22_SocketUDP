/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QLabel *iplocal;
    QLabel *IP;
    QLabel *l1;
    QLabel *l2;
    QLabel *imagen;
    QFrame *line;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QFrame *line_2;
    QFrame *line_3;
    QLabel *label_8;
    QMenuBar *menuBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(400, 268);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        iplocal = new QLabel(centralWidget);
        iplocal->setObjectName(QString::fromUtf8("iplocal"));
        iplocal->setGeometry(QRect(150, 100, 151, 21));
        QFont font;
        font.setPointSize(14);
        iplocal->setFont(font);
        IP = new QLabel(centralWidget);
        IP->setObjectName(QString::fromUtf8("IP"));
        IP->setGeometry(QRect(150, 130, 151, 21));
        IP->setFont(font);
        l1 = new QLabel(centralWidget);
        l1->setObjectName(QString::fromUtf8("l1"));
        l1->setGeometry(QRect(150, 190, 51, 21));
        l1->setFont(font);
        l2 = new QLabel(centralWidget);
        l2->setObjectName(QString::fromUtf8("l2"));
        l2->setGeometry(QRect(150, 220, 41, 16));
        l2->setFont(font);
        imagen = new QLabel(centralWidget);
        imagen->setObjectName(QString::fromUtf8("imagen"));
        imagen->setGeometry(QRect(70, 0, 251, 91));
        imagen->setStyleSheet(QString::fromUtf8("border-image: url(:/Futuro_Tecnologico.png);"));
        line = new QFrame(centralWidget);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(0, 80, 401, 16));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 90, 131, 41));
        label->setFont(font);
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(10, 120, 121, 41));
        label_2->setFont(font);
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(0, 160, 391, 21));
        QPalette palette;
        QBrush brush(QColor(0, 170, 127, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        QBrush brush1(QColor(120, 120, 120, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        label_3->setPalette(palette);
        QFont font1;
        font1.setPointSize(16);
        label_3->setFont(font1);
        label_3->setAlignment(Qt::AlignCenter);
        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(20, 190, 141, 21));
        label_4->setFont(font);
        label_5 = new QLabel(centralWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(20, 220, 101, 16));
        label_5->setFont(font);
        label_6 = new QLabel(centralWidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(190, 190, 41, 21));
        label_6->setFont(font);
        label_7 = new QLabel(centralWidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(190, 220, 41, 21));
        label_7->setFont(font);
        line_2 = new QFrame(centralWidget);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setGeometry(QRect(0, 160, 121, 20));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);
        line_3 = new QFrame(centralWidget);
        line_3->setObjectName(QString::fromUtf8("line_3"));
        line_3->setGeometry(QRect(270, 160, 121, 20));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);
        label_8 = new QLabel(centralWidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(300, 180, 71, 61));
        label_8->setStyleSheet(QString::fromUtf8("border-image: url(:/Qt.png);"));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 400, 21));
        MainWindow->setMenuBar(menuBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "  Sensor DHT22", nullptr));
        iplocal->setText(QApplication::translate("MainWindow", "000.000.000.000", nullptr));
        IP->setText(QApplication::translate("MainWindow", "000.000.000.000", nullptr));
        l1->setText(QApplication::translate("MainWindow", "00.0", nullptr));
        l2->setText(QApplication::translate("MainWindow", "00.0", nullptr));
        imagen->setText(QString());
        label->setText(QApplication::translate("MainWindow", "IP del servidor:", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "IP del cliente:", nullptr));
        label_3->setText(QApplication::translate("MainWindow", "Sensor DHT22", nullptr));
        label_4->setText(QApplication::translate("MainWindow", "Temperatura:", nullptr));
        label_5->setText(QApplication::translate("MainWindow", "Humedad:", nullptr));
        label_6->setText(QApplication::translate("MainWindow", "\302\272C", nullptr));
        label_7->setText(QApplication::translate("MainWindow", "%", nullptr));
        label_8->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
