/********************************************************************************
** Form generated from reading UI file 'IPCalcForm.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_IPCALCFORM_H
#define UI_IPCALCFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_IPCalcForm
{
public:
    QWidget *centralwidget;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QWidget *gridLayoutWidget_2;
    QGridLayout *gridLayout_2;
    QLineEdit *lineEdit_4;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_3;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_5;

    void setupUi(QMainWindow *IPCalcForm)
    {
        if (IPCalcForm->objectName().isEmpty())
            IPCalcForm->setObjectName("IPCalcForm");
        IPCalcForm->resize(400, 250);
        IPCalcForm->setMinimumSize(QSize(400, 250));
        IPCalcForm->setMaximumSize(QSize(400, 250));
        centralwidget = new QWidget(IPCalcForm);
        centralwidget->setObjectName("centralwidget");
        gridLayoutWidget = new QWidget(centralwidget);
        gridLayoutWidget->setObjectName("gridLayoutWidget");
        gridLayoutWidget->setGeometry(QRect(10, 190, 381, 41));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        pushButton = new QPushButton(gridLayoutWidget);
        pushButton->setObjectName("pushButton");

        gridLayout->addWidget(pushButton, 0, 0, 1, 1);

        pushButton_2 = new QPushButton(gridLayoutWidget);
        pushButton_2->setObjectName("pushButton_2");

        gridLayout->addWidget(pushButton_2, 0, 1, 1, 1);

        gridLayoutWidget_2 = new QWidget(centralwidget);
        gridLayoutWidget_2->setObjectName("gridLayoutWidget_2");
        gridLayoutWidget_2->setGeometry(QRect(9, 150, 381, 31));
        gridLayout_2 = new QGridLayout(gridLayoutWidget_2);
        gridLayout_2->setObjectName("gridLayout_2");
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        lineEdit_4 = new QLineEdit(gridLayoutWidget_2);
        lineEdit_4->setObjectName("lineEdit_4");

        gridLayout_2->addWidget(lineEdit_4, 0, 3, 1, 1);

        lineEdit_2 = new QLineEdit(gridLayoutWidget_2);
        lineEdit_2->setObjectName("lineEdit_2");

        gridLayout_2->addWidget(lineEdit_2, 0, 1, 1, 1);

        lineEdit_3 = new QLineEdit(gridLayoutWidget_2);
        lineEdit_3->setObjectName("lineEdit_3");

        gridLayout_2->addWidget(lineEdit_3, 0, 2, 1, 1);

        lineEdit = new QLineEdit(gridLayoutWidget_2);
        lineEdit->setObjectName("lineEdit");

        gridLayout_2->addWidget(lineEdit, 0, 0, 1, 1);

        lineEdit_5 = new QLineEdit(gridLayoutWidget_2);
        lineEdit_5->setObjectName("lineEdit_5");

        gridLayout_2->addWidget(lineEdit_5, 0, 4, 1, 1);

        IPCalcForm->setCentralWidget(centralwidget);

        retranslateUi(IPCalcForm);

        QMetaObject::connectSlotsByName(IPCalcForm);
    } // setupUi

    void retranslateUi(QMainWindow *IPCalcForm)
    {
        IPCalcForm->setWindowTitle(QCoreApplication::translate("IPCalcForm", "IPCalcForm", nullptr));
        pushButton->setText(QCoreApplication::translate("IPCalcForm", "Start", nullptr));
        pushButton_2->setText(QCoreApplication::translate("IPCalcForm", "Clear", nullptr));
    } // retranslateUi

};

namespace Ui {
    class IPCalcForm: public Ui_IPCalcForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_IPCALCFORM_H
