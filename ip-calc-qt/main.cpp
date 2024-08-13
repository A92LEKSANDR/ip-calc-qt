#include "IPCalcForm.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    IPCalcForm w;
    w.show();
    return a.exec();
}
