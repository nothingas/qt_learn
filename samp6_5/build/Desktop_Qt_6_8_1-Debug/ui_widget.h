/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 6.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QGridLayout *gridLayout_2;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QRadioButton *radioButton_3;
    QRadioButton *radioButton_4;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout;
    QCheckBox *checkBox;
    QCheckBox *checkBox_2;
    QLabel *label;
    QComboBox *comboBox;
    QLabel *label_2;
    QComboBox *comboBox_2;
    QGroupBox *groupBox_3;
    QHBoxLayout *horizontalLayout;
    QListWidget *listWidget;
    QGroupBox *groupBox_4;
    QHBoxLayout *horizontalLayout_2;
    QListWidget *listWidget_2;
    QGroupBox *groupBox_6;
    QHBoxLayout *horizontalLayout_4;
    QTableWidget *tableWidget;
    QGroupBox *groupBox_5;
    QHBoxLayout *horizontalLayout_3;
    QTreeWidget *treeWidget;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName("Widget");
        Widget->resize(800, 600);
        gridLayout_2 = new QGridLayout(Widget);
        gridLayout_2->setObjectName("gridLayout_2");
        groupBox = new QGroupBox(Widget);
        groupBox->setObjectName("groupBox");
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setObjectName("verticalLayout");
        radioButton = new QRadioButton(groupBox);
        radioButton->setObjectName("radioButton");

        verticalLayout->addWidget(radioButton);

        radioButton_2 = new QRadioButton(groupBox);
        radioButton_2->setObjectName("radioButton_2");

        verticalLayout->addWidget(radioButton_2);

        radioButton_3 = new QRadioButton(groupBox);
        radioButton_3->setObjectName("radioButton_3");

        verticalLayout->addWidget(radioButton_3);

        radioButton_4 = new QRadioButton(groupBox);
        radioButton_4->setObjectName("radioButton_4");

        verticalLayout->addWidget(radioButton_4);


        gridLayout_2->addWidget(groupBox, 0, 0, 1, 1);

        groupBox_2 = new QGroupBox(Widget);
        groupBox_2->setObjectName("groupBox_2");
        gridLayout = new QGridLayout(groupBox_2);
        gridLayout->setObjectName("gridLayout");
        checkBox = new QCheckBox(groupBox_2);
        checkBox->setObjectName("checkBox");

        gridLayout->addWidget(checkBox, 0, 0, 1, 1);

        checkBox_2 = new QCheckBox(groupBox_2);
        checkBox_2->setObjectName("checkBox_2");

        gridLayout->addWidget(checkBox_2, 0, 1, 1, 1);

        label = new QLabel(groupBox_2);
        label->setObjectName("label");

        gridLayout->addWidget(label, 1, 0, 1, 1);

        comboBox = new QComboBox(groupBox_2);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName("comboBox");

        gridLayout->addWidget(comboBox, 1, 1, 1, 1);

        label_2 = new QLabel(groupBox_2);
        label_2->setObjectName("label_2");

        gridLayout->addWidget(label_2, 2, 0, 1, 1);

        comboBox_2 = new QComboBox(groupBox_2);
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->setObjectName("comboBox_2");

        gridLayout->addWidget(comboBox_2, 2, 1, 1, 1);


        gridLayout_2->addWidget(groupBox_2, 0, 1, 1, 2);

        groupBox_3 = new QGroupBox(Widget);
        groupBox_3->setObjectName("groupBox_3");
        horizontalLayout = new QHBoxLayout(groupBox_3);
        horizontalLayout->setObjectName("horizontalLayout");
        listWidget = new QListWidget(groupBox_3);
        listWidget->setObjectName("listWidget");

        horizontalLayout->addWidget(listWidget);


        gridLayout_2->addWidget(groupBox_3, 1, 0, 2, 1);

        groupBox_4 = new QGroupBox(Widget);
        groupBox_4->setObjectName("groupBox_4");
        horizontalLayout_2 = new QHBoxLayout(groupBox_4);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        listWidget_2 = new QListWidget(groupBox_4);
        listWidget_2->setObjectName("listWidget_2");

        horizontalLayout_2->addWidget(listWidget_2);


        gridLayout_2->addWidget(groupBox_4, 1, 1, 2, 1);

        groupBox_6 = new QGroupBox(Widget);
        groupBox_6->setObjectName("groupBox_6");
        horizontalLayout_4 = new QHBoxLayout(groupBox_6);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        tableWidget = new QTableWidget(groupBox_6);
        tableWidget->setObjectName("tableWidget");

        horizontalLayout_4->addWidget(tableWidget);


        gridLayout_2->addWidget(groupBox_6, 2, 3, 1, 1);

        groupBox_5 = new QGroupBox(Widget);
        groupBox_5->setObjectName("groupBox_5");
        horizontalLayout_3 = new QHBoxLayout(groupBox_5);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        treeWidget = new QTreeWidget(groupBox_5);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setText(0, QString::fromUtf8("1"));
        treeWidget->setHeaderItem(__qtreewidgetitem);
        treeWidget->setObjectName("treeWidget");

        horizontalLayout_3->addWidget(treeWidget);


        gridLayout_2->addWidget(groupBox_5, 2, 2, 1, 1);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        groupBox->setTitle(QCoreApplication::translate("Widget", "GroupBox", nullptr));
        radioButton->setText(QCoreApplication::translate("Widget", "listSource", nullptr));
        radioButton_2->setText(QCoreApplication::translate("Widget", "listWidget", nullptr));
        radioButton_3->setText(QCoreApplication::translate("Widget", "treeWidget", nullptr));
        radioButton_4->setText(QCoreApplication::translate("Widget", "tableWidget", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("Widget", "GroupBox", nullptr));
        checkBox->setText(QCoreApplication::translate("Widget", "acceptDrops", nullptr));
        checkBox_2->setText(QCoreApplication::translate("Widget", "dragEnable", nullptr));
        label->setText(QCoreApplication::translate("Widget", "dragDropMode", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("Widget", "NoDragDrop", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("Widget", "DragOnly", nullptr));
        comboBox->setItemText(2, QCoreApplication::translate("Widget", "DropOnly", nullptr));
        comboBox->setItemText(3, QCoreApplication::translate("Widget", "DragDrop", nullptr));
        comboBox->setItemText(4, QCoreApplication::translate("Widget", "InternalMove", nullptr));

        label_2->setText(QCoreApplication::translate("Widget", "defaultDropAction", nullptr));
        comboBox_2->setItemText(0, QCoreApplication::translate("Widget", "CopyAction", nullptr));
        comboBox_2->setItemText(1, QCoreApplication::translate("Widget", "MoveAction", nullptr));
        comboBox_2->setItemText(2, QCoreApplication::translate("Widget", "LinkAction", nullptr));
        comboBox_2->setItemText(3, QCoreApplication::translate("Widget", "IgnoreAction", nullptr));

        groupBox_3->setTitle(QCoreApplication::translate("Widget", "listSource", nullptr));
        groupBox_4->setTitle(QCoreApplication::translate("Widget", "listWidget", nullptr));
        groupBox_6->setTitle(QCoreApplication::translate("Widget", "tableWidget", nullptr));
        groupBox_5->setTitle(QCoreApplication::translate("Widget", "treeWidget", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
