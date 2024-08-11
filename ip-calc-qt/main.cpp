// #include "mainwindow.h"
#include "ipcalculator.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    // MainWindow w;
    // w.show();
    IPCalculator ipcalc;
    ipcalc.show();

    return a.exec();
}
