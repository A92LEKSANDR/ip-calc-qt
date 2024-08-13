#include "ipcalculatorform.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    IPCalculatorForm w;

    w.show();
    return a.exec();
}
