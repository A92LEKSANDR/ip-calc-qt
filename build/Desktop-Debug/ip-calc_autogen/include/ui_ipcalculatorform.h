/********************************************************************************
** Form generated from reading UI file 'ipcalculatorform.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_IPCALCULATORFORM_H
#define UI_IPCALCULATORFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_IPCalculatorForm
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
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_5;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_3;
    QWidget *gridLayoutWidget_3;
    QGridLayout *gridLayout_3;
    QLabel *resultLabel;

    void setupUi(QMainWindow *IPCalculatorForm)
    {
        if (IPCalculatorForm->objectName().isEmpty())
            IPCalculatorForm->setObjectName("IPCalculatorForm");
        IPCalculatorForm->resize(400, 250);
        IPCalculatorForm->setMinimumSize(QSize(400, 250));
        IPCalculatorForm->setMaximumSize(QSize(400, 250));
        centralwidget = new QWidget(IPCalculatorForm);
        centralwidget->setObjectName("centralwidget");
        gridLayoutWidget = new QWidget(centralwidget);
        gridLayoutWidget->setObjectName("gridLayoutWidget");
        gridLayoutWidget->setGeometry(QRect(80, 200, 221, 31));
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
        gridLayoutWidget_2->setGeometry(QRect(9, 150, 381, 41));
        gridLayout_2 = new QGridLayout(gridLayoutWidget_2);
        gridLayout_2->setObjectName("gridLayout_2");
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        lineEdit_4 = new QLineEdit(gridLayoutWidget_2);
        lineEdit_4->setObjectName("lineEdit_4");
        lineEdit_4->setMaxLength(3);

        gridLayout_2->addWidget(lineEdit_4, 0, 3, 1, 1);

        lineEdit = new QLineEdit(gridLayoutWidget_2);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setMaxLength(3);

        gridLayout_2->addWidget(lineEdit, 0, 0, 1, 1);

        lineEdit_5 = new QLineEdit(gridLayoutWidget_2);
        lineEdit_5->setObjectName("lineEdit_5");
        lineEdit_5->setMaxLength(2);

        gridLayout_2->addWidget(lineEdit_5, 0, 4, 1, 1);

        lineEdit_2 = new QLineEdit(gridLayoutWidget_2);
        lineEdit_2->setObjectName("lineEdit_2");
        lineEdit_2->setMaxLength(3);

        gridLayout_2->addWidget(lineEdit_2, 0, 1, 1, 1);

        lineEdit_3 = new QLineEdit(gridLayoutWidget_2);
        lineEdit_3->setObjectName("lineEdit_3");
        lineEdit_3->setMaxLength(3);

        gridLayout_2->addWidget(lineEdit_3, 0, 2, 1, 1);

        gridLayoutWidget_3 = new QWidget(centralwidget);
        gridLayoutWidget_3->setObjectName("gridLayoutWidget_3");
        gridLayoutWidget_3->setGeometry(QRect(10, 20, 381, 91));
        gridLayout_3 = new QGridLayout(gridLayoutWidget_3);
        gridLayout_3->setObjectName("gridLayout_3");
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        resultLabel = new QLabel(gridLayoutWidget_3);
        resultLabel->setObjectName("resultLabel");
        QFont font;
        font.setPointSize(11);
        resultLabel->setFont(font);

        gridLayout_3->addWidget(resultLabel, 0, 0, 1, 1);

        IPCalculatorForm->setCentralWidget(centralwidget);

        retranslateUi(IPCalculatorForm);

        QMetaObject::connectSlotsByName(IPCalculatorForm);
    } // setupUi

    void retranslateUi(QMainWindow *IPCalculatorForm)
    {
        IPCalculatorForm->setWindowTitle(QCoreApplication::translate("IPCalculatorForm", "IPCalculatorForm", nullptr));
        pushButton->setText(QCoreApplication::translate("IPCalculatorForm", "Start", nullptr));
        pushButton_2->setText(QCoreApplication::translate("IPCalculatorForm", "Clear", nullptr));
        resultLabel->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class IPCalculatorForm: public Ui_IPCalculatorForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_IPCALCULATORFORM_H
