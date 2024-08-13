#include "./ui_IPCalcForm.h"
#include "IPCalcForm.h"

IPCalcForm::IPCalcForm(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::IPCalcForm)
{
    ui->setupUi(this);
}

IPCalcForm::~IPCalcForm()
{
    delete ui;
}
