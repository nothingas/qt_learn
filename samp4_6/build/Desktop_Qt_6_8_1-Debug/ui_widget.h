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
#include <QtWidgets/QDial>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QScrollBar>
#include <QtWidgets/QSlider>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QLabel *label_2;
    QLabel *label;
    QScrollBar *horizontalScrollBar;
    QSlider *horizontalSlider;
    QDial *dial;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_2;
    QProgressBar *progressBar;
    QCheckBox *checkBox_2;
    QRadioButton *radioButton;
    QCheckBox *checkBox;
    QRadioButton *radioButton_2;
    QLabel *label_3;

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
        label_2 = new QLabel(groupBox);
        label_2->setObjectName("label_2");

        gridLayout->addWidget(label_2, 5, 1, 1, 1);

        label = new QLabel(groupBox);
        label->setObjectName("label");

        gridLayout->addWidget(label, 1, 1, 1, 1);

        horizontalScrollBar = new QScrollBar(groupBox);
        horizontalScrollBar->setObjectName("horizontalScrollBar");
        horizontalScrollBar->setOrientation(Qt::Orientation::Horizontal);

        gridLayout->addWidget(horizontalScrollBar, 5, 3, 1, 1);

        horizontalSlider = new QSlider(groupBox);
        horizontalSlider->setObjectName("horizontalSlider");
        horizontalSlider->setOrientation(Qt::Orientation::Horizontal);

        gridLayout->addWidget(horizontalSlider, 1, 3, 1, 1);

        dial = new QDial(groupBox);
        dial->setObjectName("dial");
        dial->setWrapping(true);
        dial->setNotchesVisible(true);

        gridLayout->addWidget(dial, 1, 0, 1, 1);


        verticalLayout->addWidget(groupBox);

        groupBox_2 = new QGroupBox(Widget);
        groupBox_2->setObjectName("groupBox_2");
        gridLayout_2 = new QGridLayout(groupBox_2);
        gridLayout_2->setObjectName("gridLayout_2");
        progressBar = new QProgressBar(groupBox_2);
        progressBar->setObjectName("progressBar");
        progressBar->setValue(0);

        gridLayout_2->addWidget(progressBar, 2, 1, 1, 2);

        checkBox_2 = new QCheckBox(groupBox_2);
        checkBox_2->setObjectName("checkBox_2");

        gridLayout_2->addWidget(checkBox_2, 3, 2, 1, 1);

        radioButton = new QRadioButton(groupBox_2);
        radioButton->setObjectName("radioButton");

        gridLayout_2->addWidget(radioButton, 4, 0, 1, 2);

        checkBox = new QCheckBox(groupBox_2);
        checkBox->setObjectName("checkBox");

        gridLayout_2->addWidget(checkBox, 3, 0, 1, 2);

        radioButton_2 = new QRadioButton(groupBox_2);
        radioButton_2->setObjectName("radioButton_2");

        gridLayout_2->addWidget(radioButton_2, 4, 2, 1, 1);

        label_3 = new QLabel(groupBox_2);
        label_3->setObjectName("label_3");

        gridLayout_2->addWidget(label_3, 2, 0, 1, 1);


        verticalLayout->addWidget(groupBox_2);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        groupBox->setTitle(QCoreApplication::translate("Widget", "\346\273\221\345\212\250\350\276\223\345\205\245", nullptr));
        label_2->setText(QCoreApplication::translate("Widget", "\345\215\267\346\273\232\346\235\241", nullptr));
        label->setText(QCoreApplication::translate("Widget", "\346\273\221\345\212\250\346\235\241", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("Widget", "ProgressBar\346\230\276\347\244\272\345\222\214\350\256\276\347\275\256", nullptr));
        checkBox_2->setText(QCoreApplication::translate("Widget", "InvertedAppearance", nullptr));
        radioButton->setText(QCoreApplication::translate("Widget", "\346\230\276\347\244\272\346\240\274\345\274\217--\347\231\276\345\210\206\346\257\224", nullptr));
        checkBox->setText(QCoreApplication::translate("Widget", "textVisible", nullptr));
        radioButton_2->setText(QCoreApplication::translate("Widget", "\346\230\276\347\244\272\346\240\274\345\274\217--\345\275\223\345\211\215\345\200\274", nullptr));
        label_3->setText(QCoreApplication::translate("Widget", "\350\277\233\345\272\246\346\235\241", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
