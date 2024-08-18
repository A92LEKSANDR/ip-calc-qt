#ifndef IPCALC_H
#define IPCALC_H

#include <vector>
#include <string>

class IPCalculator{
public:
    IPCalculator();

    void setIPAddress(const std::vector<unsigned char>& ip, unsigned char prefixLength);

    std::vector<unsigned char> calculateSubnetMask() const;
    std::vector<unsigned char> calculateWildcardMask() const;
    std::vector<unsigned char> calculateNetworkAddress() const;
    std::vector<unsigned char> calculateBroadcastAddress() const;
    std::vector<unsigned char> calculateMinIPAddress() const;
    std::vector<unsigned char> calculateMaxIPAddress() const;
    std::string getSubnetClass() const;
    unsigned int calculateNumberOfHosts() const;
    std::vector<unsigned char> scanIpAddress();

private:
    std::vector<unsigned char> ip;
    unsigned char prefixLength;
};

#endif // IPCALC_H
