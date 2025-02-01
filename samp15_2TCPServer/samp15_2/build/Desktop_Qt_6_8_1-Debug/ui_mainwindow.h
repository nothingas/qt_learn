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
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionbegin;
    QAction *actionstop;
    QAction *actionclear;
    QAction *actionquit;
    QWidget *centralwidget;
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
        MainWindow->resize(373, 320);
        actionbegin = new QAction(MainWindow);
        actionbegin->setObjectName("actionbegin");
        actionbegin->setMenuRole(QAction::MenuRole::NoRole);
        actionstop = new QAction(MainWindow);
        actionstop->setObjectName("actionstop");
        actionstop->setMenuRole(QAction::MenuRole::NoRole);
        actionclear = new QAction(MainWindow);
        actionclear->setObjectName("actionclear");
        actionclear->setMenuRole(QAction::MenuRole::NoRole);
        actionquit = new QAction(MainWindow);
        actionquit->setObjectName("actionquit");
        actionquit->setMenuRole(QAction::MenuRole::NoRole);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName("gridLayout");
        label = new QLabel(centralwidget);
        label->setObjectName("label");

        gridLayout->addWidget(label, 0, 0, 1, 1);

        comboBox = new QComboBox(centralwidget);
        comboBox->setObjectName("comboBox");

        gridLayout->addWidget(comboBox, 0, 1, 1, 1);

        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");

        gridLayout->addWidget(label_2, 0, 2, 1, 1);

        spinBox = new QSpinBox(centralwidget);
        spinBox->setObjectName("spinBox");
        spinBox->setMaximum(100000);

        gridLayout->addWidget(spinBox, 0, 3, 1, 1);

        lineEdit = new QLineEdit(centralwidget);
        lineEdit->setObjectName("lineEdit");

        gridLayout->addWidget(lineEdit, 1, 0, 1, 3);

        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName("pushButton");

        gridLayout->addWidget(pushButton, 1, 3, 1, 1);

        plainTextEdit = new QPlainTextEdit(centralwidget);
        plainTextEdit->setObjectName("plainTextEdit");

        gridLayout->addWidget(plainTextEdit, 2, 0, 1, 4);

        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName("toolBar");
        MainWindow->addToolBar(Qt::ToolBarArea::TopToolBarArea, toolBar);

        toolBar->addAction(actionbegin);
        toolBar->addAction(actionstop);
        toolBar->addAction(actionclear);
        toolBar->addSeparator();
        toolBar->addAction(actionquit);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actionbegin->setText(QCoreApplication::translate("MainWindow", "begin", nullptr));
        actionstop->setText(QCoreApplication::translate("MainWindow", "stop", nullptr));
        actionclear->setText(QCoreApplication::translate("MainWindow", "clear", nullptr));
        actionquit->setText(QCoreApplication::translate("MainWindow", "quit", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "\347\233\221\345\220\254\345\234\260\345\235\200", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "\347\233\221\345\220\254\347\253\257\345\217\243", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "\345\217\221\351\200\201\346\266\210\346\201\257", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("MainWindow", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
