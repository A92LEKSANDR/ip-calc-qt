#include "./ui_IPCalcForm.h"
#include "IPCalcForm.h"

IPCalcForm::IPCalcForm(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::IPCalcForm)
{
    ui->setupUi(this);

    //set background application
    this->setStyleSheet("background-color: #d9edf7;");

    //ui->butStart->setStyleSheet("color: #a9edf7");

    // set validator on line1...4 for ip octate
    QIntValidator *validator = new QIntValidator(0, 255, this);
    ui->lineEdit1->setValidator(validator);
    ui->lineEdit2->setValidator(validator);
    ui->lineEdit3->setValidator(validator);
    ui->lineEdit4->setValidator(validator);

    QIntValidator* validMask = new QIntValidator(0,32,this);
    ui->lineEdit5->setValidator(validMask);

    // connect to button start
    connect(ui->butStart, &QPushButton::clicked, this, &IPCalcForm::on_calculateButton_clicked);
    // connetct to button clear
    connect(ui->clearButton,&QPushButton::clicked, this, &IPCalcForm::clearFields);
    //connect to button scan
    connect(ui->ScanButton,&QPushButton::clicked, this, &IPCalcForm::onGetIpButtonClicked);
}


void IPCalcForm::setCalculator(IPCalculator* calc) {
    calculator = calc;
}

void IPCalcForm::on_calculateButton_clicked() {

    QString ipPart1 = ui->lineEdit1->text();
    QString ipPart2 = ui->lineEdit2->text();
    QString ipPart3 = ui->lineEdit3->text();
    QString ipPart4 = ui->lineEdit4->text();

    QString prefixLengthStr = ui->lineEdit5->text();

    bool validInput = true;
    int ip1 = ipPart1.toInt(&validInput, 10);
    int ip2 = ipPart2.toInt(&validInput, 10);
    int ip3 = ipPart3.toInt(&validInput, 10);
    int ip4 = ipPart4.toInt(&validInput, 10);
    int prefixLength = prefixLengthStr.toInt(&validInput, 10);

    if (validInput && ip1 >= 0 && ip1 <= 255 &&
        ip2 >= 0 && ip2 <= 255 &&
        ip3 >= 0 && ip3 <= 255 &&
        ip4 >= 0 && ip4 <= 255 &&
        prefixLength >= 0 && prefixLength <= 32) {

        std::vector<unsigned char> ip = {
            static_cast<unsigned char>(ip1),
            static_cast<unsigned char>(ip2),
            static_cast<unsigned char>(ip3),
            static_cast<unsigned char>(ip4)
        };

        calculator->setIPAddress(ip, static_cast<unsigned char>(prefixLength));

        // Получаем и выводим результаты
        auto subnetMask = calculator->calculateSubnetMask();
        auto wildcardMask = calculator->calculateWildcardMask();
        auto networkAddress = calculator->calculateNetworkAddress();
        auto broadcastAddress = calculator->calculateBroadcastAddress();
        auto minIP = calculator->calculateMinIPAddress();
        auto maxIP = calculator->calculateMaxIPAddress();
        auto subnetClass = calculator->getSubnetClass();
        auto numHosts = calculator->calculateNumberOfHosts();

        QString resultText = QString("Subnet Mask: %1.%2.%3.%4\n"
                                     "Wildcard Mask: %5.%6.%7.%8\n"
                                     "Network Address: %9.%10.%11.%12\n"
                                     "Broadcast Address: %13.%14.%15.%16\n"
                                     "Min IP Address: %17.%18.%19.%20\n"
                                     "Max IP Address: %21.%22.%23.%24\n"
                                     "Subnet Class: %25\n"
                                     "Number of Hosts: %26")
                                 .arg(subnetMask[0]).arg(subnetMask[1]).arg(subnetMask[2]).arg(subnetMask[3])
                                 .arg(wildcardMask[0]).arg(wildcardMask[1]).arg(wildcardMask[2]).arg(wildcardMask[3])
                                 .arg(networkAddress[0]).arg(networkAddress[1]).arg(networkAddress[2]).arg(networkAddress[3])
                                 .arg(broadcastAddress[0]).arg(broadcastAddress[1]).arg(broadcastAddress[2]).arg(broadcastAddress[3])
                                 .arg(minIP[0]).arg(minIP[1]).arg(minIP[2]).arg(minIP[3])
                                 .arg(maxIP[0]).arg(maxIP[1]).arg(maxIP[2]).arg(maxIP[3])
                                 .arg(QString::fromStdString(subnetClass))
                                 .arg(numHosts);

        ui->LabelResult->setText(resultText);
    } else {
        ui->LabelResult->setText("Введите корректный IP-адрес.");
    }
}

void IPCalcForm::clearFields(){
    ui->LabelResult->clear();
    ui->lineEdit1->clear();
    ui->lineEdit2->clear();
    ui->lineEdit3->clear();
    ui->lineEdit4->clear();
    ui->lineEdit5->clear();
}

void IPCalcForm::displayResults(const std::vector<int>& results) {
    if (!results.empty()) {
        QString resultText;
        for (const int &result : results) {
            resultText.append(QString::number(result) + "\n");
        }
        ui->LabelResult->setText(resultText);
        ui->LabelResult->setText("No results available.");
    }
}


void IPCalcForm::onGetIpButtonClicked() {
    std::vector<unsigned char> ipAdd = calculator->getIpInPc();

    calculator->setIPAddress(ipAdd, static_cast<unsigned char>(24));

    // Получаем и выводим результаты
    auto subnetMask = calculator->calculateSubnetMask();
    auto wildcardMask = calculator->calculateWildcardMask();
    auto networkAddress = calculator->calculateNetworkAddress();
    auto broadcastAddress = calculator->calculateBroadcastAddress();
    auto minIP = calculator->calculateMinIPAddress();
    auto maxIP = calculator->calculateMaxIPAddress();
    auto subnetClass = calculator->getSubnetClass();
    auto numHosts = calculator->calculateNumberOfHosts();

    QString resultText = QString("Subnet Mask: %1.%2.%3.%4\n"
                                 "Wildcard Mask: %5.%6.%7.%8\n"
                                 "Network Address: %9.%10.%11.%12\n"
                                 "Broadcast Address: %13.%14.%15.%16\n"
                                 "Min IP Address: %17.%18.%19.%20\n"
                                 "Max IP Address: %21.%22.%23.%24\n"
                                 "Subnet Class: %25\n"
                                 "Number of Hosts: %26")
                             .arg(subnetMask[0]).arg(subnetMask[1]).arg(subnetMask[2]).arg(subnetMask[3])
                             .arg(wildcardMask[0]).arg(wildcardMask[1]).arg(wildcardMask[2]).arg(wildcardMask[3])
                             .arg(networkAddress[0]).arg(networkAddress[1]).arg(networkAddress[2]).arg(networkAddress[3])
                             .arg(broadcastAddress[0]).arg(broadcastAddress[1]).arg(broadcastAddress[2]).arg(broadcastAddress[3])
                             .arg(minIP[0]).arg(minIP[1]).arg(minIP[2]).arg(minIP[3])
                             .arg(maxIP[0]).arg(maxIP[1]).arg(maxIP[2]).arg(maxIP[3])
                             .arg(QString::fromStdString(subnetClass))
                             .arg(numHosts);
    ui->LabelResult->setAlignment(Qt::AlignVCenter);
    ui->LabelResult->setText(resultText);

}

IPCalcForm::~IPCalcForm()
{
    delete ui;
}
