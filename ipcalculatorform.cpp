#include "ipcalculatorform.h"
#include "./ui_ipcalculatorform.h"

IPCalculatorForm::IPCalculatorForm(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::IPCalculatorForm)
{
    ui->setupUi(this);
}

IPCalculatorForm::~IPCalculatorForm()
{
    delete ui;
}
