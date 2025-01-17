/********************************************************************************
** Form generated from reading UI file 'tdialoglocate.ui'
**
** Created by: Qt User Interface Compiler version 6.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TDIALOGLOCATE_H
#define UI_TDIALOGLOCATE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>

QT_BEGIN_NAMESPACE

class Ui_TDialogLocate
{
public:
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QSpinBox *spinBox;
    QSpinBox *spinBox_2;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *lineEdit;
    QLabel *label_3;
    QCheckBox *checkBox;
    QCheckBox *checkBox_2;

    void setupUi(QDialog *TDialogLocate)
    {
        if (TDialogLocate->objectName().isEmpty())
            TDialogLocate->setObjectName("TDialogLocate");
        TDialogLocate->resize(400, 300);
        pushButton = new QPushButton(TDialogLocate);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(50, 200, 88, 26));
        pushButton_2 = new QPushButton(TDialogLocate);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(230, 200, 88, 26));
        spinBox = new QSpinBox(TDialogLocate);
        spinBox->setObjectName("spinBox");
        spinBox->setGeometry(QRect(60, 80, 44, 27));
        spinBox_2 = new QSpinBox(TDialogLocate);
        spinBox_2->setObjectName("spinBox_2");
        spinBox_2->setGeometry(QRect(270, 80, 44, 27));
        label = new QLabel(TDialogLocate);
        label->setObjectName("label");
        label->setGeometry(QRect(50, 40, 66, 18));
        label_2 = new QLabel(TDialogLocate);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(260, 40, 66, 18));
        lineEdit = new QLineEdit(TDialogLocate);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(120, 130, 113, 26));
        label_3 = new QLabel(TDialogLocate);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(60, 130, 66, 18));
        checkBox = new QCheckBox(TDialogLocate);
        checkBox->setObjectName("checkBox");
        checkBox->setGeometry(QRect(50, 10, 92, 24));
        checkBox_2 = new QCheckBox(TDialogLocate);
        checkBox_2->setObjectName("checkBox_2");
        checkBox_2->setGeometry(QRect(240, 0, 92, 24));

        retranslateUi(TDialogLocate);

        QMetaObject::connectSlotsByName(TDialogLocate);
    } // setupUi

    void retranslateUi(QDialog *TDialogLocate)
    {
        TDialogLocate->setWindowTitle(QCoreApplication::translate("TDialogLocate", "Dialog", nullptr));
        pushButton->setText(QCoreApplication::translate("TDialogLocate", "SetText", nullptr));
        pushButton_2->setText(QCoreApplication::translate("TDialogLocate", "Close", nullptr));
        label->setText(QCoreApplication::translate("TDialogLocate", "Row", nullptr));
        label_2->setText(QCoreApplication::translate("TDialogLocate", "Column", nullptr));
        label_3->setText(QCoreApplication::translate("TDialogLocate", "Text:", nullptr));
        checkBox->setText(QCoreApplication::translate("TDialogLocate", "CheckBox", nullptr));
        checkBox_2->setText(QCoreApplication::translate("TDialogLocate", "CheckBox", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TDialogLocate: public Ui_TDialogLocate {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TDIALOGLOCATE_H
