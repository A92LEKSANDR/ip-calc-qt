#include "ipcalculatorForm.h"  // Assuming this is your custom class header
#include "./ui_ipcalculatorForm.h"  // Include the generated UI header

IPCalculatorForm::IPCalculatorForm(QWidget* parent)
    : QMainWindow(parent)
    , ui(new Ui::IPCalculatorForm)
{
    ui->setupUi(this);
}

IPCalculatorForm::~IPCalculatorForm()
{
    delete ui;
}
