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
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *action;
    QAction *action2;
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout_2;
    QListView *listView;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QRadioButton *radioButton_2;
    QComboBox *comboBox;
    QPushButton *pushButton;
    QCheckBox *checkBox;
    QRadioButton *radioButton;
    QTableView *tableView;
    QTreeView *treeView;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QCheckBox *checkBox_2;
    QLabel *label_4;
    QToolBar *toolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        action = new QAction(MainWindow);
        action->setObjectName("action");
        action->setMenuRole(QAction::MenuRole::NoRole);
        action2 = new QAction(MainWindow);
        action2->setObjectName("action2");
        action2->setMenuRole(QAction::MenuRole::NoRole);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName("verticalLayout");
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName("gridLayout_2");
        listView = new QListView(centralwidget);
        listView->setObjectName("listView");

        gridLayout_2->addWidget(listView, 0, 1, 1, 1);

        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName("groupBox");
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName("gridLayout");
        radioButton_2 = new QRadioButton(groupBox);
        radioButton_2->setObjectName("radioButton_2");

        gridLayout->addWidget(radioButton_2, 0, 2, 1, 2);

        comboBox = new QComboBox(groupBox);
        comboBox->setObjectName("comboBox");

        gridLayout->addWidget(comboBox, 1, 2, 1, 1);

        pushButton = new QPushButton(groupBox);
        pushButton->setObjectName("pushButton");

        gridLayout->addWidget(pushButton, 1, 3, 1, 1);

        checkBox = new QCheckBox(groupBox);
        checkBox->setObjectName("checkBox");

        gridLayout->addWidget(checkBox, 1, 0, 1, 1);

        radioButton = new QRadioButton(groupBox);
        radioButton->setObjectName("radioButton");

        gridLayout->addWidget(radioButton, 0, 0, 1, 1);


        gridLayout_2->addWidget(groupBox, 0, 0, 1, 1);

        tableView = new QTableView(centralwidget);
        tableView->setObjectName("tableView");

        gridLayout_2->addWidget(tableView, 1, 1, 1, 1);

        treeView = new QTreeView(centralwidget);
        treeView->setObjectName("treeView");

        gridLayout_2->addWidget(treeView, 1, 0, 1, 1);


        verticalLayout->addLayout(gridLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label = new QLabel(centralwidget);
        label->setObjectName("label");

        horizontalLayout->addWidget(label);

        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");

        horizontalLayout->addWidget(label_2);

        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");

        horizontalLayout->addWidget(label_3);

        checkBox_2 = new QCheckBox(centralwidget);
        checkBox_2->setObjectName("checkBox_2");
        checkBox_2->setEnabled(true);

        horizontalLayout->addWidget(checkBox_2);


        verticalLayout->addLayout(horizontalLayout);

        label_4 = new QLabel(centralwidget);
        label_4->setObjectName("label_4");

        verticalLayout->addWidget(label_4);

        MainWindow->setCentralWidget(centralwidget);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName("toolBar");
        MainWindow->addToolBar(Qt::ToolBarArea::TopToolBarArea, toolBar);

        toolBar->addAction(action);
        toolBar->addAction(action2);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        action->setText(QCoreApplication::translate("MainWindow", "\350\256\276\347\275\256\346\240\271\347\233\256\345\275\225", nullptr));
        action2->setText(QCoreApplication::translate("MainWindow", "quit", nullptr));
        groupBox->setTitle(QCoreApplication::translate("MainWindow", "TreeView", nullptr));
        radioButton_2->setText(QCoreApplication::translate("MainWindow", "\345\217\252\346\230\276\347\244\272\347\233\256\345\275\225", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "\345\272\224\347\224\250", nullptr));
        checkBox->setText(QCoreApplication::translate("MainWindow", "\346\226\207\344\273\266\345\220\215\350\277\207\346\273\244", nullptr));
        radioButton->setText(QCoreApplication::translate("MainWindow", "\346\230\276\347\244\272\347\233\256\345\275\225\345\222\214\346\226\207\344\273\266", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        checkBox_2->setText(QCoreApplication::translate("MainWindow", "CheckBox", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("MainWindow", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
