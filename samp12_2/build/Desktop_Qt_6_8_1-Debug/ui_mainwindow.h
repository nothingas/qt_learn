/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCharts/QChartView>
#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout;
    QToolBox *toolBox;
    QWidget *Page;
    QVBoxLayout *verticalLayout_3;
    QPushButton *pushButton;
    QLineEdit *editTitle;
    QPushButton *pushButton_2;
    QGroupBox *groupBox;
    QDoubleSpinBox *spinMarginLeft;
    QDoubleSpinBox *spinMarginRight;
    QDoubleSpinBox *spinMarginTop;
    QDoubleSpinBox *spinMarginBottom;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_2;
    QComboBox *comboBox;
    QComboBox *comboBox_2;
    QWidget *page_2;
    QVBoxLayout *verticalLayout_5;
    QGroupBox *groupBox_3;
    QHBoxLayout *horizontalLayout_2;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QGroupBox *groupBox_4;
    QGridLayout *gridLayout;
    QPushButton *pushButton_3;
    QLineEdit *lineEdit;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QSlider *horizontalSlider;
    QCheckBox *checkBox;
    QGroupBox *groupBox_5;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label;
    QDoubleSpinBox *doubleSpinBox;
    QPushButton *pushButton_6;
    QGroupBox *groupBox_6;
    QVBoxLayout *verticalLayout_4;
    QRadioButton *radioButton_3;
    QRadioButton *radioButton_4;
    QFrame *frame;
    QVBoxLayout *verticalLayout;
    QChartView *chartView;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        horizontalLayout = new QHBoxLayout(centralwidget);
        horizontalLayout->setObjectName("horizontalLayout");
        toolBox = new QToolBox(centralwidget);
        toolBox->setObjectName("toolBox");
        Page = new QWidget();
        Page->setObjectName("Page");
        Page->setGeometry(QRect(0, 0, 259, 495));
        verticalLayout_3 = new QVBoxLayout(Page);
        verticalLayout_3->setObjectName("verticalLayout_3");
        pushButton = new QPushButton(Page);
        pushButton->setObjectName("pushButton");

        verticalLayout_3->addWidget(pushButton);

        editTitle = new QLineEdit(Page);
        editTitle->setObjectName("editTitle");

        verticalLayout_3->addWidget(editTitle);

        pushButton_2 = new QPushButton(Page);
        pushButton_2->setObjectName("pushButton_2");

        verticalLayout_3->addWidget(pushButton_2);

        groupBox = new QGroupBox(Page);
        groupBox->setObjectName("groupBox");
        spinMarginLeft = new QDoubleSpinBox(groupBox);
        spinMarginLeft->setObjectName("spinMarginLeft");
        spinMarginLeft->setGeometry(QRect(10, 70, 65, 27));
        spinMarginRight = new QDoubleSpinBox(groupBox);
        spinMarginRight->setObjectName("spinMarginRight");
        spinMarginRight->setGeometry(QRect(110, 70, 65, 27));
        spinMarginTop = new QDoubleSpinBox(groupBox);
        spinMarginTop->setObjectName("spinMarginTop");
        spinMarginTop->setGeometry(QRect(60, 30, 65, 27));
        spinMarginBottom = new QDoubleSpinBox(groupBox);
        spinMarginBottom->setObjectName("spinMarginBottom");
        spinMarginBottom->setGeometry(QRect(70, 100, 65, 27));

        verticalLayout_3->addWidget(groupBox);

        groupBox_2 = new QGroupBox(Page);
        groupBox_2->setObjectName("groupBox_2");
        verticalLayout_2 = new QVBoxLayout(groupBox_2);
        verticalLayout_2->setObjectName("verticalLayout_2");
        comboBox = new QComboBox(groupBox_2);
        comboBox->setObjectName("comboBox");

        verticalLayout_2->addWidget(comboBox);

        comboBox_2 = new QComboBox(groupBox_2);
        comboBox_2->setObjectName("comboBox_2");

        verticalLayout_2->addWidget(comboBox_2);


        verticalLayout_3->addWidget(groupBox_2);

        toolBox->addItem(Page, QString::fromUtf8("Page 1"));
        page_2 = new QWidget();
        page_2->setObjectName("page_2");
        page_2->setGeometry(QRect(0, 0, 259, 495));
        verticalLayout_5 = new QVBoxLayout(page_2);
        verticalLayout_5->setObjectName("verticalLayout_5");
        groupBox_3 = new QGroupBox(page_2);
        groupBox_3->setObjectName("groupBox_3");
        horizontalLayout_2 = new QHBoxLayout(groupBox_3);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        radioButton = new QRadioButton(groupBox_3);
        radioButton->setObjectName("radioButton");
        radioButton->setChecked(true);

        horizontalLayout_2->addWidget(radioButton);

        radioButton_2 = new QRadioButton(groupBox_3);
        radioButton_2->setObjectName("radioButton_2");

        horizontalLayout_2->addWidget(radioButton_2);


        verticalLayout_5->addWidget(groupBox_3);

        groupBox_4 = new QGroupBox(page_2);
        groupBox_4->setObjectName("groupBox_4");
        gridLayout = new QGridLayout(groupBox_4);
        gridLayout->setObjectName("gridLayout");
        pushButton_3 = new QPushButton(groupBox_4);
        pushButton_3->setObjectName("pushButton_3");

        gridLayout->addWidget(pushButton_3, 0, 0, 1, 1);

        lineEdit = new QLineEdit(groupBox_4);
        lineEdit->setObjectName("lineEdit");

        gridLayout->addWidget(lineEdit, 0, 1, 1, 1);

        pushButton_4 = new QPushButton(groupBox_4);
        pushButton_4->setObjectName("pushButton_4");

        gridLayout->addWidget(pushButton_4, 1, 0, 1, 1);

        pushButton_5 = new QPushButton(groupBox_4);
        pushButton_5->setObjectName("pushButton_5");

        gridLayout->addWidget(pushButton_5, 1, 1, 1, 1);

        horizontalSlider = new QSlider(groupBox_4);
        horizontalSlider->setObjectName("horizontalSlider");
        horizontalSlider->setOrientation(Qt::Orientation::Horizontal);

        gridLayout->addWidget(horizontalSlider, 3, 0, 1, 2);

        checkBox = new QCheckBox(groupBox_4);
        checkBox->setObjectName("checkBox");

        gridLayout->addWidget(checkBox, 2, 0, 1, 1);


        verticalLayout_5->addWidget(groupBox_4);

        groupBox_5 = new QGroupBox(page_2);
        groupBox_5->setObjectName("groupBox_5");
        horizontalLayout_3 = new QHBoxLayout(groupBox_5);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        label = new QLabel(groupBox_5);
        label->setObjectName("label");

        horizontalLayout_3->addWidget(label);

        doubleSpinBox = new QDoubleSpinBox(groupBox_5);
        doubleSpinBox->setObjectName("doubleSpinBox");

        horizontalLayout_3->addWidget(doubleSpinBox);

        pushButton_6 = new QPushButton(groupBox_5);
        pushButton_6->setObjectName("pushButton_6");

        horizontalLayout_3->addWidget(pushButton_6);


        verticalLayout_5->addWidget(groupBox_5);

        groupBox_6 = new QGroupBox(page_2);
        groupBox_6->setObjectName("groupBox_6");
        verticalLayout_4 = new QVBoxLayout(groupBox_6);
        verticalLayout_4->setObjectName("verticalLayout_4");
        radioButton_3 = new QRadioButton(groupBox_6);
        radioButton_3->setObjectName("radioButton_3");

        verticalLayout_4->addWidget(radioButton_3);

        radioButton_4 = new QRadioButton(groupBox_6);
        radioButton_4->setObjectName("radioButton_4");

        verticalLayout_4->addWidget(radioButton_4);


        verticalLayout_5->addWidget(groupBox_6);

        toolBox->addItem(page_2, QString::fromUtf8("Page 2"));

        horizontalLayout->addWidget(toolBox);

        frame = new QFrame(centralwidget);
        frame->setObjectName("frame");
        frame->setFrameShape(QFrame::Shape::StyledPanel);
        frame->setFrameShadow(QFrame::Shadow::Raised);
        verticalLayout = new QVBoxLayout(frame);
        verticalLayout->setObjectName("verticalLayout");
        chartView = new QChartView(frame);
        chartView->setObjectName("chartView");

        verticalLayout->addWidget(chartView);


        horizontalLayout->addWidget(frame);

        horizontalLayout->setStretch(0, 1);
        horizontalLayout->setStretch(1, 2);
        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        toolBox->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "SetTiTle", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "SetMargin", nullptr));
        groupBox->setTitle(QCoreApplication::translate("MainWindow", "Margin", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("MainWindow", "GroupBox", nullptr));
        toolBox->setItemText(toolBox->indexOf(Page), QCoreApplication::translate("MainWindow", "Page 1", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("MainWindow", "Choose_Series", nullptr));
        radioButton->setText(QCoreApplication::translate("MainWindow", "Sin", nullptr));
        radioButton_2->setText(QCoreApplication::translate("MainWindow", "Cos", nullptr));
        groupBox_4->setTitle(QCoreApplication::translate("MainWindow", "Series", nullptr));
        pushButton_3->setText(QCoreApplication::translate("MainWindow", "Name", nullptr));
        pushButton_4->setText(QCoreApplication::translate("MainWindow", "Color", nullptr));
        pushButton_5->setText(QCoreApplication::translate("MainWindow", "Series_Pen", nullptr));
        checkBox->setText(QCoreApplication::translate("MainWindow", "openGL", nullptr));
        groupBox_5->setTitle(QCoreApplication::translate("MainWindow", "Points", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Size:", nullptr));
        pushButton_6->setText(QCoreApplication::translate("MainWindow", "points_color", nullptr));
        groupBox_6->setTitle(QCoreApplication::translate("MainWindow", "GroupBox", nullptr));
        radioButton_3->setText(QCoreApplication::translate("MainWindow", "\"@yPoint\"", nullptr));
        radioButton_4->setText(QCoreApplication::translate("MainWindow", "\"(@xPoint,@yPoint)\"", nullptr));
        toolBox->setItemText(toolBox->indexOf(page_2), QCoreApplication::translate("MainWindow", "Page 2", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
