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
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QHBoxLayout *horizontalLayout;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox_3;
    QGridLayout *gridLayout;
    QPushButton *p11;
    QPushButton *p12;
    QPushButton *p13;
    QPushButton *p14;
    QGroupBox *groupBox_4;
    QGridLayout *gridLayout_2;
    QPushButton *p21;
    QPushButton *p22;
    QPushButton *pushButton_8;
    QPushButton *p24;
    QGroupBox *groupBox_5;
    QGridLayout *gridLayout_3;
    QPushButton *p34;
    QPushButton *p33;
    QPushButton *p32;
    QPushButton *p31;
    QGroupBox *groupBox_6;
    QGridLayout *gridLayout_4;
    QPushButton *p41;
    QPushButton *p42;
    QPushButton *p43;
    QPushButton *p44;
    QSpacerItem *verticalSpacer;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_3;
    QGroupBox *groupBox_7;
    QGridLayout *gridLayout_5;
    QLabel *str2;
    QComboBox *comboBox;
    QLabel *label_3;
    QSpinBox *spinBox;
    QLabel *str1;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QGroupBox *groupBox_8;
    QVBoxLayout *verticalLayout_2;
    QPushButton *p5;
    QPlainTextEdit *plainTextEdit;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName("Widget");
        Widget->resize(916, 600);
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Widget->sizePolicy().hasHeightForWidth());
        Widget->setSizePolicy(sizePolicy);
        horizontalLayout = new QHBoxLayout(Widget);
        horizontalLayout->setObjectName("horizontalLayout");
        groupBox = new QGroupBox(Widget);
        groupBox->setObjectName("groupBox");
        groupBox->setEnabled(true);
        sizePolicy.setHeightForWidth(groupBox->sizePolicy().hasHeightForWidth());
        groupBox->setSizePolicy(sizePolicy);
        groupBox->setMaximumSize(QSize(214, 16777215));
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setSpacing(2);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(1, 1, 1, 1);
        groupBox_3 = new QGroupBox(groupBox);
        groupBox_3->setObjectName("groupBox_3");
        groupBox_3->setMaximumSize(QSize(206, 16777215));
        gridLayout = new QGridLayout(groupBox_3);
        gridLayout->setObjectName("gridLayout");
        p11 = new QPushButton(groupBox_3);
        p11->setObjectName("p11");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(p11->sizePolicy().hasHeightForWidth());
        p11->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(p11, 0, 0, 1, 1);

        p12 = new QPushButton(groupBox_3);
        p12->setObjectName("p12");

        gridLayout->addWidget(p12, 0, 1, 1, 1);

        p13 = new QPushButton(groupBox_3);
        p13->setObjectName("p13");

        gridLayout->addWidget(p13, 1, 0, 1, 1);

        p14 = new QPushButton(groupBox_3);
        p14->setObjectName("p14");

        gridLayout->addWidget(p14, 1, 1, 1, 1);


        verticalLayout->addWidget(groupBox_3);

        groupBox_4 = new QGroupBox(groupBox);
        groupBox_4->setObjectName("groupBox_4");
        gridLayout_2 = new QGridLayout(groupBox_4);
        gridLayout_2->setObjectName("gridLayout_2");
        p21 = new QPushButton(groupBox_4);
        p21->setObjectName("p21");
        sizePolicy1.setHeightForWidth(p21->sizePolicy().hasHeightForWidth());
        p21->setSizePolicy(sizePolicy1);

        gridLayout_2->addWidget(p21, 0, 0, 1, 1);

        p22 = new QPushButton(groupBox_4);
        p22->setObjectName("p22");

        gridLayout_2->addWidget(p22, 0, 1, 1, 1);

        pushButton_8 = new QPushButton(groupBox_4);
        pushButton_8->setObjectName("pushButton_8");

        gridLayout_2->addWidget(pushButton_8, 1, 0, 1, 1);

        p24 = new QPushButton(groupBox_4);
        p24->setObjectName("p24");

        gridLayout_2->addWidget(p24, 1, 1, 1, 1);


        verticalLayout->addWidget(groupBox_4);

        groupBox_5 = new QGroupBox(groupBox);
        groupBox_5->setObjectName("groupBox_5");
        gridLayout_3 = new QGridLayout(groupBox_5);
        gridLayout_3->setObjectName("gridLayout_3");
        p34 = new QPushButton(groupBox_5);
        p34->setObjectName("p34");

        gridLayout_3->addWidget(p34, 3, 2, 1, 1);

        p33 = new QPushButton(groupBox_5);
        p33->setObjectName("p33");

        gridLayout_3->addWidget(p33, 3, 0, 1, 1);

        p32 = new QPushButton(groupBox_5);
        p32->setObjectName("p32");

        gridLayout_3->addWidget(p32, 2, 2, 1, 1);

        p31 = new QPushButton(groupBox_5);
        p31->setObjectName("p31");

        gridLayout_3->addWidget(p31, 2, 0, 1, 1);


        verticalLayout->addWidget(groupBox_5);

        groupBox_6 = new QGroupBox(groupBox);
        groupBox_6->setObjectName("groupBox_6");
        gridLayout_4 = new QGridLayout(groupBox_6);
        gridLayout_4->setObjectName("gridLayout_4");
        p41 = new QPushButton(groupBox_6);
        p41->setObjectName("p41");

        gridLayout_4->addWidget(p41, 0, 0, 1, 1);

        p42 = new QPushButton(groupBox_6);
        p42->setObjectName("p42");

        gridLayout_4->addWidget(p42, 0, 1, 1, 1);

        p43 = new QPushButton(groupBox_6);
        p43->setObjectName("p43");

        gridLayout_4->addWidget(p43, 1, 0, 1, 1);

        p44 = new QPushButton(groupBox_6);
        p44->setObjectName("p44");

        gridLayout_4->addWidget(p44, 1, 1, 1, 1);


        verticalLayout->addWidget(groupBox_6);


        horizontalLayout->addWidget(groupBox, 0, Qt::AlignmentFlag::AlignLeft);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        horizontalLayout->addItem(verticalSpacer);

        groupBox_2 = new QGroupBox(Widget);
        groupBox_2->setObjectName("groupBox_2");
        QSizePolicy sizePolicy2(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(groupBox_2->sizePolicy().hasHeightForWidth());
        groupBox_2->setSizePolicy(sizePolicy2);
        groupBox_2->setMinimumSize(QSize(536, 0));
        verticalLayout_3 = new QVBoxLayout(groupBox_2);
        verticalLayout_3->setObjectName("verticalLayout_3");
        groupBox_7 = new QGroupBox(groupBox_2);
        groupBox_7->setObjectName("groupBox_7");
        gridLayout_5 = new QGridLayout(groupBox_7);
        gridLayout_5->setObjectName("gridLayout_5");
        str2 = new QLabel(groupBox_7);
        str2->setObjectName("str2");

        gridLayout_5->addWidget(str2, 2, 0, 1, 1);

        comboBox = new QComboBox(groupBox_7);
        comboBox->setObjectName("comboBox");

        gridLayout_5->addWidget(comboBox, 2, 1, 1, 1);

        label_3 = new QLabel(groupBox_7);
        label_3->setObjectName("label_3");
        label_3->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);

        gridLayout_5->addWidget(label_3, 2, 2, 1, 1);

        spinBox = new QSpinBox(groupBox_7);
        spinBox->setObjectName("spinBox");

        gridLayout_5->addWidget(spinBox, 2, 3, 1, 1);

        str1 = new QLabel(groupBox_7);
        str1->setObjectName("str1");

        gridLayout_5->addWidget(str1, 0, 0, 1, 1);

        lineEdit = new QLineEdit(groupBox_7);
        lineEdit->setObjectName("lineEdit");

        gridLayout_5->addWidget(lineEdit, 0, 1, 1, 2);

        lineEdit_2 = new QLineEdit(groupBox_7);
        lineEdit_2->setObjectName("lineEdit_2");
        sizePolicy1.setHeightForWidth(lineEdit_2->sizePolicy().hasHeightForWidth());
        lineEdit_2->setSizePolicy(sizePolicy1);

        gridLayout_5->addWidget(lineEdit_2, 0, 3, 1, 1);


        verticalLayout_3->addWidget(groupBox_7);

        groupBox_8 = new QGroupBox(groupBox_2);
        groupBox_8->setObjectName("groupBox_8");
        verticalLayout_2 = new QVBoxLayout(groupBox_8);
        verticalLayout_2->setObjectName("verticalLayout_2");
        p5 = new QPushButton(groupBox_8);
        p5->setObjectName("p5");

        verticalLayout_2->addWidget(p5);

        plainTextEdit = new QPlainTextEdit(groupBox_8);
        plainTextEdit->setObjectName("plainTextEdit");

        verticalLayout_2->addWidget(plainTextEdit);


        verticalLayout_3->addWidget(groupBox_8);


        horizontalLayout->addWidget(groupBox_2);

        horizontalLayout->setStretch(0, 2);

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        groupBox->setTitle(QString());
        groupBox_3->setTitle(QCoreApplication::translate("Widget", "\345\255\227\347\254\246\344\270\262\346\210\252\345\217\226", nullptr));
        p11->setText(QCoreApplication::translate("Widget", "front && back", nullptr));
        p12->setText(QCoreApplication::translate("Widget", "left && right", nullptr));
        p13->setText(QCoreApplication::translate("Widget", "first && last", nullptr));
        p14->setText(QCoreApplication::translate("Widget", "section *", nullptr));
        groupBox_4->setTitle(QCoreApplication::translate("Widget", "\345\255\230\345\202\250\347\233\270\345\205\263", nullptr));
        p21->setText(QCoreApplication::translate("Widget", "isNull && isEmpty", nullptr));
        p22->setText(QCoreApplication::translate("Widget", "resize", nullptr));
        pushButton_8->setText(QCoreApplication::translate("Widget", "size && length", nullptr));
        p24->setText(QCoreApplication::translate("Widget", "fill", nullptr));
        groupBox_5->setTitle(QCoreApplication::translate("Widget", "\346\220\234\347\264\242\345\222\214\345\210\244\346\226\255", nullptr));
        p34->setText(QCoreApplication::translate("Widget", "count", nullptr));
        p33->setText(QCoreApplication::translate("Widget", "endsWith && startsWith", nullptr));
        p32->setText(QCoreApplication::translate("Widget", "contains", nullptr));
        p31->setText(QCoreApplication::translate("Widget", "indexOf && lastIndexOf", nullptr));
        groupBox_6->setTitle(QCoreApplication::translate("Widget", "\350\275\254\346\215\242\346\210\226\344\277\256\346\224\271", nullptr));
        p41->setText(QCoreApplication::translate("Widget", "trimmed && simplified", nullptr));
        p42->setText(QCoreApplication::translate("Widget", "insert", nullptr));
        p43->setText(QCoreApplication::translate("Widget", "remove", nullptr));
        p44->setText(QCoreApplication::translate("Widget", "replace", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("Widget", "GroupBox", nullptr));
        groupBox_7->setTitle(QCoreApplication::translate("Widget", "GroupBox", nullptr));
        str2->setText(QCoreApplication::translate("Widget", "\350\256\276\347\275\256:", nullptr));
        label_3->setText(QCoreApplication::translate("Widget", "\345\217\202\346\225\260:", nullptr));
        str1->setText(QCoreApplication::translate("Widget", "str:", nullptr));
        groupBox_8->setTitle(QCoreApplication::translate("Widget", "GroupBox", nullptr));
        p5->setText(QCoreApplication::translate("Widget", "\346\270\205\347\251\272\346\226\207\346\234\254\346\241\206", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
