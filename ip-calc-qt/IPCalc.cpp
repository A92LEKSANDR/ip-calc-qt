#include "IPCalc.h"

IPCalculator::IPCalculator() {

}

void IPCalculator::setIPAddress(const std::vector<unsigned char>& ip, unsigned char prefixLength) {
    this->ip = ip;
    this->prefixLength = prefixLength;
}

std::vector<unsigned char> IPCalculator::calculateSubnetMask() const {
    std::vector<unsigned char> mask(4, 0);
    for (unsigned char i = 0; i < prefixLength; ++i) {
        mask[i / 8] |= (1 << (7 - i % 8));
    }
    return mask;
}

std::vector<unsigned char> IPCalculator::calculateWildcardMask() const {
    std::vector<unsigned char> wildcardMask(4);
    auto subnetMask = calculateSubnetMask();
    for (int i = 0; i < 4; ++i) {
        wildcardMask[i] = ~subnetMask[i];
    }
    return wildcardMask;
}

std::vector<unsigned char> IPCalculator::calculateNetworkAddress() const {
    std::vector<unsigned char> networkAddress(4);
    auto subnetMask = calculateSubnetMask();
    for (int i = 0; i < 4; ++i) {
        networkAddress[i] = ip[i] & subnetMask[i];
    }
    return networkAddress;
}

std::vector<unsigned char> IPCalculator::calculateBroadcastAddress() const {
    std::vector<unsigned char> broadcastAddress(4);
    auto networkAddress = calculateNetworkAddress();
    auto wildcardMask = calculateWildcardMask();
    for (int i = 0; i < 4; ++i) {
        broadcastAddress[i] = networkAddress[i] | wildcardMask[i];
    }
    return broadcastAddress;
}

std::vector<unsigned char> IPCalculator::calculateMinIPAddress() const {
    auto networkAddress = calculateNetworkAddress();
    networkAddress[3] += 1;
    return networkAddress;
}

std::vector<unsigned char> IPCalculator::calculateMaxIPAddress() const {
    auto broadcastAddress = calculateBroadcastAddress();
    broadcastAddress[3] -= 1;
    return broadcastAddress;
}

std::string IPCalculator::getSubnetClass() const {
    if (ip[0] >= 1 && ip[0] <= 126)
        return "Class A";
    else if (ip[0] >= 128 && ip[0] <= 191)
        return "Class B";
    else if (ip[0] >= 192 && ip[0] <= 223)
        return "Class C";
    else if (ip[0] >= 224 && ip[0] <= 239)
        return "Class D";
    else
        return "Class E";
}

unsigned int IPCalculator::calculateNumberOfHosts() const {
    return (1 << (32 - prefixLength)) - 2;
}

//add function
std::vector<unsigned char> IPCalculator::scanIpAddress(){

    return {1,3};
}
