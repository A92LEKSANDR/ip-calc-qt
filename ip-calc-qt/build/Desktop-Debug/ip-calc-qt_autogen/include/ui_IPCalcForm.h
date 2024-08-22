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
#include <QtWidgets/QLabel>
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
    QPushButton *butStart;
    QPushButton *clearButton;
    QPushButton *ScanButton;
    QWidget *gridLayoutWidget_2;
    QGridLayout *gridLayout_2;
    QLineEdit *lineEdit4;
    QLineEdit *lineEdit2;
    QLineEdit *lineEdit3;
    QLineEdit *lineEdit1;
    QLineEdit *lineEdit5;
    QWidget *gridLayoutWidget_3;
    QGridLayout *gridLayout_3;
    QLabel *LabelResult;

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
        gridLayoutWidget->setGeometry(QRect(10, 200, 381, 41));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        butStart = new QPushButton(gridLayoutWidget);
        butStart->setObjectName("butStart");

        gridLayout->addWidget(butStart, 0, 0, 1, 1);

        clearButton = new QPushButton(gridLayoutWidget);
        clearButton->setObjectName("clearButton");

        gridLayout->addWidget(clearButton, 0, 2, 1, 1);

        ScanButton = new QPushButton(gridLayoutWidget);
        ScanButton->setObjectName("ScanButton");

        gridLayout->addWidget(ScanButton, 0, 1, 1, 1);

        gridLayoutWidget_2 = new QWidget(centralwidget);
        gridLayoutWidget_2->setObjectName("gridLayoutWidget_2");
        gridLayoutWidget_2->setGeometry(QRect(9, 160, 381, 31));
        gridLayout_2 = new QGridLayout(gridLayoutWidget_2);
        gridLayout_2->setObjectName("gridLayout_2");
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        lineEdit4 = new QLineEdit(gridLayoutWidget_2);
        lineEdit4->setObjectName("lineEdit4");
        lineEdit4->setMaxLength(3);

        gridLayout_2->addWidget(lineEdit4, 0, 3, 1, 1);

        lineEdit2 = new QLineEdit(gridLayoutWidget_2);
        lineEdit2->setObjectName("lineEdit2");
        lineEdit2->setMaxLength(3);

        gridLayout_2->addWidget(lineEdit2, 0, 1, 1, 1);

        lineEdit3 = new QLineEdit(gridLayoutWidget_2);
        lineEdit3->setObjectName("lineEdit3");
        lineEdit3->setMaxLength(3);

        gridLayout_2->addWidget(lineEdit3, 0, 2, 1, 1);

        lineEdit1 = new QLineEdit(gridLayoutWidget_2);
        lineEdit1->setObjectName("lineEdit1");
        lineEdit1->setMaxLength(3);

        gridLayout_2->addWidget(lineEdit1, 0, 0, 1, 1);

        lineEdit5 = new QLineEdit(gridLayoutWidget_2);
        lineEdit5->setObjectName("lineEdit5");
        lineEdit5->setMaxLength(2);

        gridLayout_2->addWidget(lineEdit5, 0, 4, 1, 1);

        gridLayoutWidget_3 = new QWidget(centralwidget);
        gridLayoutWidget_3->setObjectName("gridLayoutWidget_3");
        gridLayoutWidget_3->setGeometry(QRect(9, 9, 381, 131));
        gridLayout_3 = new QGridLayout(gridLayoutWidget_3);
        gridLayout_3->setObjectName("gridLayout_3");
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        LabelResult = new QLabel(gridLayoutWidget_3);
        LabelResult->setObjectName("LabelResult");
        LabelResult->setTextFormat(Qt::TextFormat::PlainText);

        gridLayout_3->addWidget(LabelResult, 0, 0, 1, 1);

        IPCalcForm->setCentralWidget(centralwidget);

        retranslateUi(IPCalcForm);

        QMetaObject::connectSlotsByName(IPCalcForm);
    } // setupUi

    void retranslateUi(QMainWindow *IPCalcForm)
    {
        IPCalcForm->setWindowTitle(QCoreApplication::translate("IPCalcForm", "IPCalcForm", nullptr));
        butStart->setText(QCoreApplication::translate("IPCalcForm", "Start", nullptr));
        clearButton->setText(QCoreApplication::translate("IPCalcForm", "Clear", nullptr));
        ScanButton->setText(QCoreApplication::translate("IPCalcForm", "Scan Lan", nullptr));
        LabelResult->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class IPCalcForm: public Ui_IPCalcForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_IPCALCFORM_H
