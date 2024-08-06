#ifndef IPCALCULATOR_H
#define IPCALCULATOR_H

#include <QWidget>
#include <QLineEdit>
#include <QPushButton>
#include <QLabel>
#include <QGridLayout>

namespace Ui {
class IPCalculator;
}

class IPCalculator : public QWidget {
    Q_OBJECT

public:
    explicit IPCalculator(QWidget *parent = nullptr);
    ~IPCalculator();

private slots:
    void calculate();  // Убедитесь, что имя метода написано с маленькой буквы
    void reset();

private:
    Ui::IPCalculator *ui;
};

#endif // IPCALCULATOR_H
