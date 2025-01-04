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
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QLabel *label_4;
    QSpinBox *spinBox;
    QLabel *label_5;
    QLabel *label_6;
    QPushButton *pushButton;
    QDoubleSpinBox *doubleSpinBox_2;
    QDoubleSpinBox *doubleSpinBox_3;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_2;
    QSpinBox *spinBox_6;
    QLabel *label_3;
    QLabel *label_2;
    QSpinBox *spinBox_4;
    QLabel *label;
    QSpinBox *spinBox_5;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName("Widget");
        Widget->resize(800, 600);
        verticalLayout = new QVBoxLayout(Widget);
        verticalLayout->setObjectName("verticalLayout");
        groupBox = new QGroupBox(Widget);
        groupBox->setObjectName("groupBox");
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName("gridLayout");
        label_4 = new QLabel(groupBox);
        label_4->setObjectName("label_4");

        gridLayout->addWidget(label_4, 0, 0, 1, 1);

        spinBox = new QSpinBox(groupBox);
        spinBox->setObjectName("spinBox");

        gridLayout->addWidget(spinBox, 0, 1, 1, 1);

        label_5 = new QLabel(groupBox);
        label_5->setObjectName("label_5");

        gridLayout->addWidget(label_5, 0, 2, 1, 1);

        label_6 = new QLabel(groupBox);
        label_6->setObjectName("label_6");

        gridLayout->addWidget(label_6, 1, 2, 1, 1);

        pushButton = new QPushButton(groupBox);
        pushButton->setObjectName("pushButton");

        gridLayout->addWidget(pushButton, 1, 1, 1, 1);

        doubleSpinBox_2 = new QDoubleSpinBox(groupBox);
        doubleSpinBox_2->setObjectName("doubleSpinBox_2");

        gridLayout->addWidget(doubleSpinBox_2, 0, 3, 1, 1);

        doubleSpinBox_3 = new QDoubleSpinBox(groupBox);
        doubleSpinBox_3->setObjectName("doubleSpinBox_3");

        gridLayout->addWidget(doubleSpinBox_3, 1, 3, 1, 1);


        verticalLayout->addWidget(groupBox);

        groupBox_2 = new QGroupBox(Widget);
        groupBox_2->setObjectName("groupBox_2");
        gridLayout_2 = new QGridLayout(groupBox_2);
        gridLayout_2->setObjectName("gridLayout_2");
        spinBox_6 = new QSpinBox(groupBox_2);
        spinBox_6->setObjectName("spinBox_6");

        gridLayout_2->addWidget(spinBox_6, 3, 1, 1, 1);

        label_3 = new QLabel(groupBox_2);
        label_3->setObjectName("label_3");

        gridLayout_2->addWidget(label_3, 3, 0, 1, 1);

        label_2 = new QLabel(groupBox_2);
        label_2->setObjectName("label_2");

        gridLayout_2->addWidget(label_2, 1, 0, 1, 1);

        spinBox_4 = new QSpinBox(groupBox_2);
        spinBox_4->setObjectName("spinBox_4");

        gridLayout_2->addWidget(spinBox_4, 0, 1, 1, 1);

        label = new QLabel(groupBox_2);
        label->setObjectName("label");

        gridLayout_2->addWidget(label, 0, 0, 1, 1);

        spinBox_5 = new QSpinBox(groupBox_2);
        spinBox_5->setObjectName("spinBox_5");

        gridLayout_2->addWidget(spinBox_5, 1, 1, 1, 1);


        verticalLayout->addWidget(groupBox_2);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        groupBox->setTitle(QCoreApplication::translate("Widget", "\346\225\260\345\200\274\350\276\223\345\205\245\344\270\216\350\276\223\345\207\272", nullptr));
        label_4->setText(QCoreApplication::translate("Widget", "\346\225\260\351\207\217", nullptr));
        label_5->setText(QCoreApplication::translate("Widget", "\345\215\225\344\273\267", nullptr));
        label_6->setText(QCoreApplication::translate("Widget", "\346\200\273\344\273\267", nullptr));
        pushButton->setText(QCoreApplication::translate("Widget", "\350\256\241\347\256\227", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("Widget", "GroupBox", nullptr));
        label_3->setText(QCoreApplication::translate("Widget", "16base", nullptr));
        label_2->setText(QCoreApplication::translate("Widget", "2base", nullptr));
        label->setText(QCoreApplication::translate("Widget", "10base", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
