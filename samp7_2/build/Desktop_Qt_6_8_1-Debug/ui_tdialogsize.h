/********************************************************************************
** Form generated from reading UI file 'tdialogsize.ui'
**
** Created by: Qt User Interface Compiler version 6.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TDIALOGSIZE_H
#define UI_TDIALOGSIZE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>

QT_BEGIN_NAMESPACE

class Ui_TDialogsize
{
public:
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QSpinBox *spinBox;
    QSpinBox *spinBox_2;

    void setupUi(QDialog *TDialogsize)
    {
        if (TDialogsize->objectName().isEmpty())
            TDialogsize->setObjectName("TDialogsize");
        TDialogsize->resize(400, 300);
        pushButton = new QPushButton(TDialogsize);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(30, 220, 88, 26));
        pushButton_2 = new QPushButton(TDialogsize);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(210, 220, 88, 26));
        spinBox = new QSpinBox(TDialogsize);
        spinBox->setObjectName("spinBox");
        spinBox->setGeometry(QRect(60, 70, 44, 27));
        spinBox_2 = new QSpinBox(TDialogsize);
        spinBox_2->setObjectName("spinBox_2");
        spinBox_2->setGeometry(QRect(230, 70, 44, 27));

        retranslateUi(TDialogsize);
        QObject::connect(pushButton, &QPushButton::clicked, TDialogsize, qOverload<>(&QDialog::accept));
        QObject::connect(pushButton_2, &QPushButton::clicked, TDialogsize, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(TDialogsize);
    } // setupUi

    void retranslateUi(QDialog *TDialogsize)
    {
        TDialogsize->setWindowTitle(QCoreApplication::translate("TDialogsize", "Dialog", nullptr));
        pushButton->setText(QCoreApplication::translate("TDialogsize", "OK", nullptr));
        pushButton_2->setText(QCoreApplication::translate("TDialogsize", "Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TDialogsize: public Ui_TDialogsize {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TDIALOGSIZE_H
