/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionconnect;
    QAction *actiondisconnect;
    QAction *actionclear;
    QAction *actionquit;
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QLabel *label;
    QComboBox *comboBox;
    QLabel *label_2;
    QSpinBox *spinBox;
    QLineEdit *lineEdit;
    QPushButton *pushButton;
    QPlainTextEdit *plainTextEdit;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(317, 339);
        actionconnect = new QAction(MainWindow);
        actionconnect->setObjectName("actionconnect");
        actionconnect->setMenuRole(QAction::MenuRole::NoRole);
        actiondisconnect = new QAction(MainWindow);
        actiondisconnect->setObjectName("actiondisconnect");
        actiondisconnect->setMenuRole(QAction::MenuRole::NoRole);
        actionclear = new QAction(MainWindow);
        actionclear->setObjectName("actionclear");
        actionclear->setMenuRole(QAction::MenuRole::NoRole);
        actionquit = new QAction(MainWindow);
        actionquit->setObjectName("actionquit");
        actionquit->setMenuRole(QAction::MenuRole::NoRole);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName("verticalLayout");
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName("groupBox");
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName("gridLayout");
        label = new QLabel(groupBox);
        label->setObjectName("label");

        gridLayout->addWidget(label, 0, 0, 1, 1);

        comboBox = new QComboBox(groupBox);
        comboBox->setObjectName("comboBox");

        gridLayout->addWidget(comboBox, 0, 1, 1, 1);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName("label_2");

        gridLayout->addWidget(label_2, 0, 2, 1, 1);

        spinBox = new QSpinBox(groupBox);
        spinBox->setObjectName("spinBox");
        spinBox->setMaximum(100000);

        gridLayout->addWidget(spinBox, 0, 3, 1, 1);

        lineEdit = new QLineEdit(groupBox);
        lineEdit->setObjectName("lineEdit");

        gridLayout->addWidget(lineEdit, 1, 0, 1, 3);

        pushButton = new QPushButton(groupBox);
        pushButton->setObjectName("pushButton");

        gridLayout->addWidget(pushButton, 1, 3, 1, 1);


        verticalLayout->addWidget(groupBox);

        plainTextEdit = new QPlainTextEdit(centralwidget);
        plainTextEdit->setObjectName("plainTextEdit");

        verticalLayout->addWidget(plainTextEdit);

        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName("toolBar");
        MainWindow->addToolBar(Qt::ToolBarArea::TopToolBarArea, toolBar);

        toolBar->addAction(actionconnect);
        toolBar->addAction(actiondisconnect);
        toolBar->addAction(actionclear);
        toolBar->addAction(actionquit);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actionconnect->setText(QCoreApplication::translate("MainWindow", "connect", nullptr));
        actiondisconnect->setText(QCoreApplication::translate("MainWindow", "disconnect", nullptr));
        actionclear->setText(QCoreApplication::translate("MainWindow", "clear", nullptr));
        actionquit->setText(QCoreApplication::translate("MainWindow", "quit", nullptr));
        groupBox->setTitle(QString());
        label->setText(QCoreApplication::translate("MainWindow", "Server IP", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Port", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "Send", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("MainWindow", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
