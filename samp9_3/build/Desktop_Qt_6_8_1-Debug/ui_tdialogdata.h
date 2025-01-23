/********************************************************************************
** Form generated from reading UI file 'tdialogdata.ui'
**
** Created by: Qt User Interface Compiler version 6.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TDIALOGDATA_H
#define UI_TDIALOGDATA_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_TDialogData
{
public:
    QHBoxLayout *horizontalLayout;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QGroupBox *groupBox_3;
    QGridLayout *gridLayout_2;
    QLabel *label_2;
    QSpinBox *spinBox;
    QLabel *label_3;
    QLineEdit *lineEdit;
    QLabel *label_4;
    QComboBox *comboBox;
    QLabel *label_5;
    QDateEdit *dateEdit;
    QLabel *label_6;
    QComboBox *comboBox_2;
    QLabel *label_7;
    QComboBox *comboBox_3;
    QLabel *label_8;
    QSpinBox *spinBox_2;
    QLabel *label;
    QPlainTextEdit *plainTextEdit;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;

    void setupUi(QDialog *TDialogData)
    {
        if (TDialogData->objectName().isEmpty())
            TDialogData->setObjectName("TDialogData");
        TDialogData->resize(649, 644);
        horizontalLayout = new QHBoxLayout(TDialogData);
        horizontalLayout->setObjectName("horizontalLayout");
        groupBox = new QGroupBox(TDialogData);
        groupBox->setObjectName("groupBox");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(groupBox->sizePolicy().hasHeightForWidth());
        groupBox->setSizePolicy(sizePolicy);
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setVerticalSpacing(4);
        groupBox_3 = new QGroupBox(groupBox);
        groupBox_3->setObjectName("groupBox_3");
        gridLayout_2 = new QGridLayout(groupBox_3);
        gridLayout_2->setObjectName("gridLayout_2");
        label_2 = new QLabel(groupBox_3);
        label_2->setObjectName("label_2");

        gridLayout_2->addWidget(label_2, 0, 0, 1, 1);

        spinBox = new QSpinBox(groupBox_3);
        spinBox->setObjectName("spinBox");

        gridLayout_2->addWidget(spinBox, 0, 2, 1, 1);

        label_3 = new QLabel(groupBox_3);
        label_3->setObjectName("label_3");

        gridLayout_2->addWidget(label_3, 1, 0, 1, 1);

        lineEdit = new QLineEdit(groupBox_3);
        lineEdit->setObjectName("lineEdit");

        gridLayout_2->addWidget(lineEdit, 1, 2, 1, 1);

        label_4 = new QLabel(groupBox_3);
        label_4->setObjectName("label_4");

        gridLayout_2->addWidget(label_4, 2, 0, 1, 1);

        comboBox = new QComboBox(groupBox_3);
        comboBox->setObjectName("comboBox");

        gridLayout_2->addWidget(comboBox, 2, 2, 1, 1);

        label_5 = new QLabel(groupBox_3);
        label_5->setObjectName("label_5");

        gridLayout_2->addWidget(label_5, 3, 0, 1, 1);

        dateEdit = new QDateEdit(groupBox_3);
        dateEdit->setObjectName("dateEdit");

        gridLayout_2->addWidget(dateEdit, 3, 1, 1, 2);

        label_6 = new QLabel(groupBox_3);
        label_6->setObjectName("label_6");

        gridLayout_2->addWidget(label_6, 4, 0, 1, 1);

        comboBox_2 = new QComboBox(groupBox_3);
        comboBox_2->setObjectName("comboBox_2");

        gridLayout_2->addWidget(comboBox_2, 4, 2, 1, 1);

        label_7 = new QLabel(groupBox_3);
        label_7->setObjectName("label_7");

        gridLayout_2->addWidget(label_7, 5, 0, 1, 1);

        comboBox_3 = new QComboBox(groupBox_3);
        comboBox_3->setObjectName("comboBox_3");

        gridLayout_2->addWidget(comboBox_3, 5, 2, 1, 1);

        label_8 = new QLabel(groupBox_3);
        label_8->setObjectName("label_8");

        gridLayout_2->addWidget(label_8, 6, 0, 1, 2);

        spinBox_2 = new QSpinBox(groupBox_3);
        spinBox_2->setObjectName("spinBox_2");

        gridLayout_2->addWidget(spinBox_2, 6, 2, 1, 1);


        gridLayout->addWidget(groupBox_3, 0, 0, 1, 1);

        label = new QLabel(groupBox);
        label->setObjectName("label");

        gridLayout->addWidget(label, 0, 1, 1, 1);

        plainTextEdit = new QPlainTextEdit(groupBox);
        plainTextEdit->setObjectName("plainTextEdit");

        gridLayout->addWidget(plainTextEdit, 1, 0, 1, 2);

        gridLayout->setRowStretch(0, 2);

        horizontalLayout->addWidget(groupBox);

        groupBox_2 = new QGroupBox(TDialogData);
        groupBox_2->setObjectName("groupBox_2");
        verticalLayout = new QVBoxLayout(groupBox_2);
        verticalLayout->setObjectName("verticalLayout");
        pushButton = new QPushButton(groupBox_2);
        pushButton->setObjectName("pushButton");

        verticalLayout->addWidget(pushButton);

        pushButton_2 = new QPushButton(groupBox_2);
        pushButton_2->setObjectName("pushButton_2");

        verticalLayout->addWidget(pushButton_2);

        pushButton_3 = new QPushButton(groupBox_2);
        pushButton_3->setObjectName("pushButton_3");

        verticalLayout->addWidget(pushButton_3);

        pushButton_4 = new QPushButton(groupBox_2);
        pushButton_4->setObjectName("pushButton_4");

        verticalLayout->addWidget(pushButton_4);


        horizontalLayout->addWidget(groupBox_2);

        horizontalLayout->setStretch(0, 2);

        retranslateUi(TDialogData);

        QMetaObject::connectSlotsByName(TDialogData);
    } // setupUi

    void retranslateUi(QDialog *TDialogData)
    {
        TDialogData->setWindowTitle(QCoreApplication::translate("TDialogData", "Dialog", nullptr));
        groupBox->setTitle(QString());
        groupBox_3->setTitle(QString());
        label_2->setText(QCoreApplication::translate("TDialogData", "\345\267\245\350\265\204", nullptr));
        label_3->setText(QCoreApplication::translate("TDialogData", "\345\247\223\345\220\215", nullptr));
        label_4->setText(QCoreApplication::translate("TDialogData", "\346\200\247\345\210\253", nullptr));
        label_5->setText(QCoreApplication::translate("TDialogData", "\345\207\272\347\224\237\346\227\245\346\234\237", nullptr));
        label_6->setText(QCoreApplication::translate("TDialogData", "\347\234\201\344\273\275", nullptr));
        label_7->setText(QCoreApplication::translate("TDialogData", "\351\203\250\351\227\250", nullptr));
        label_8->setText(QCoreApplication::translate("TDialogData", "\345\267\245\350\265\204", nullptr));
        label->setText(QCoreApplication::translate("TDialogData", "TextLabel", nullptr));
        groupBox_2->setTitle(QString());
        pushButton->setText(QCoreApplication::translate("TDialogData", "inpic", nullptr));
        pushButton_2->setText(QCoreApplication::translate("TDialogData", "delpic", nullptr));
        pushButton_3->setText(QCoreApplication::translate("TDialogData", "yes", nullptr));
        pushButton_4->setText(QCoreApplication::translate("TDialogData", "no", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TDialogData: public Ui_TDialogData {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TDIALOGDATA_H
