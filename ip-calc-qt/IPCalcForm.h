#ifndef IPCALCFORM_H
#define IPCALCFORM_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class IPCalcForm;
}
QT_END_NAMESPACE

class IPCalcForm : public QMainWindow
{
    Q_OBJECT

public:
    IPCalcForm(QWidget *parent = nullptr);
    ~IPCalcForm();

private:
    Ui::IPCalcForm *ui;
};
#endif // IPCALCFORM_H
