#ifndef IPCALCULATORFORM_H
#define IPCALCULATORFORM_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class IPCalculatorForm;
}
QT_END_NAMESPACE

class IPCalculatorForm : public QMainWindow
{
    Q_OBJECT

public:
    IPCalculatorForm(QWidget *parent = nullptr);
    ~IPCalculatorForm();

private:
    Ui::IPCalculatorForm* ui;
};
#endif // IPCALCULATORFORM_H
