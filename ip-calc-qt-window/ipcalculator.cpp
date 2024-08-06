#include "ipcalculator.h"
#include "ui_ipcalculator.h"

IPCalculator::IPCalculator(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::IPCalculator)
{
    ui->setupUi(this);

    // Подключение сигналов и слотов
    connect(ui->startButton, &QPushButton::clicked, this, &IPCalculator::calculate);
    connect(ui->resetButton, &QPushButton::clicked, this, &IPCalculator::reset);
}

IPCalculator::~IPCalculator() {
    delete ui;
}

void IPCalculator::calculate() {
    // Реализация вычислений
}

void IPCalculator::reset() {
    // Реализация сброса
}
