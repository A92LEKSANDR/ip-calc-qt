#include <QApplication>
#include "IPCalcForm.h"
#include "IPCalc.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    IPCalculator calculator;
    IPCalcForm form;
    form.setCalculator(&calculator);

    form.show();
    return a.exec();
}
