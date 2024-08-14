#ifndef IPCALCFORM_H
#define IPCALCFORM_H

#include <QMainWindow>
#include <QIntValidator>
#include "IPCalc.h"

QT_BEGIN_NAMESPACE
namespace Ui {
class IPCalcForm;
}
QT_END_NAMESPACE

class IPCalcForm : public QMainWindow
{
    Q_OBJECT

public:
    explicit IPCalcForm(QWidget *parent = nullptr);

    void setCalculator(IPCalculator* calculator);  // Метод для установки объекта логики

    void displayResults(const std::vector<int>& results);  // Метод для отображения результатов

    ~IPCalcForm();

private slots:
    void clearFields();
    void on_calculateButton_clicked();  // Слот для обработки нажатия кнопки

private:
    Ui::IPCalcForm* ui;
    IPCalculator* calculator;  // Указатель на объект логики

    //void displayResults(const std::vector<int>& results);
};
#endif // IPCALCFORM_H


