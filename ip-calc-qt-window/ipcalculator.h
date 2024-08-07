#ifndef IPCALCULATOR_H
#define IPCALCULATOR_H

#include <QWidget>

class IPCalculator : public QWidget{
    Q_OBJECT
public:
    explicit IPCalculator(QWidget* parent = nullptr);

    ~IPCalculator();

};

#endif // IPCALCULATOR_H
