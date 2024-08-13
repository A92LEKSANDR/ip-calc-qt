#ifndef IPCALC_H
#define IPCALC_H

#include <vector>

class IPCalculator {
public:
    void processIPAddress(unsigned int part1, unsigned int part2, unsigned int part3, unsigned int part4);
    std::vector<int> getResults() const;

private:
    std::vector<int> results;
};

#endif // IPCALC_H
