#include "ipcalc.h"

void IPCalculator::processIPAddress(unsigned int part1, unsigned int part2, unsigned int part3, unsigned int part4) {
    // Логика для части IP и сохраняем результат
    std::vector<int> result;//
    result.push_back(part1);
    result.push_back(part2);
    result.push_back(part3);
    result.push_back(part4);
}


//будем выводит результат в label в объекте ipcalculatorForm
std::vector<int> IPCalculator::getResults() const {
    return results;
}
