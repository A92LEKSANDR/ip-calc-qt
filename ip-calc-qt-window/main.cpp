#include "mainwindow.h"
#include <QApplication>
#include "ipcalculator.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;

    IPCalculator calculator;
    calculator.show();
    return a.exec();
}
