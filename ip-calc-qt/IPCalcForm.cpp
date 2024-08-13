#include "./ui_IPCalcForm.h"
#include "IPCalcForm.h"

IPCalcForm::IPCalcForm(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::IPCalcForm)
{
    ui->setupUi(this);

    // Установка валидаторов для полей ввода
    QIntValidator *validator = new QIntValidator(0, 255, this);
    ui->lineEdit1->setValidator(validator);
    ui->lineEdit2->setValidator(validator);
    ui->lineEdit3->setValidator(validator);
    ui->lineEdit4->setValidator(validator);

    // Соединение сигнала кнопки с соответствующим слотом
    connect(ui->butStart, &QPushButton::clicked, this, &IPCalcForm::on_calculateButton_clicked);
}


void IPCalcForm::setCalculator(IPCalculator *calc) {
    calculator = calc;
}

void IPCalcForm::on_calculateButton_clicked() {
    // Получение данных из полей ввода
    bool ok1, ok2, ok3, ok4;
    unsigned int part1 = ui->lineEdit1->text().toUInt(&ok1);
    unsigned int part2 = ui->lineEdit2->text().toUInt(&ok2);
    unsigned int part3 = ui->lineEdit3->text().toUInt(&ok3);
    unsigned int part4 = ui->lineEdit4->text().toUInt(&ok4);

    if (ok1 && ok2 && ok3 && ok4 && calculator != nullptr) {
        // Передаем данные в объект логики
       // calculator->processIPAddress(part1, part2, part3, part4);

        // Получаем результаты из объекта логики
        //std::vector<int> results = calculator->getResults();

        // Отображаем результаты на форме
       // displayResults(results);
    }
    else {
        // Обработка ошибок ввода
        ui->LabelResult->setText("Ошибка: некорректный ввод.");
    }
}

void IPCalcForm::displayResults(const std::vector<int>& results) {
    if (!results.empty()) {
        QString resultText;
        for (const int &result : results) {
            resultText.append(QString::number(result) + "\n");
        }
        ui->LabelResult->setText(resultText);  // Отображаем результаты
    } else {
        ui->LabelResult->setText("No results available.");
    }
}

IPCalcForm::~IPCalcForm()
{
    delete ui;
}
