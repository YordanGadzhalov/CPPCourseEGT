#include "Package.h"

Package::Package(const string& senderAddress, const string& recipientAddress, 
    const string& city, const string& state, const string& zipCode, double weight, double costPerOunce)
    : senderAddress(senderAddress), recipientAddress(recipientAddress), city(city), 
    state(state), zipCode(zipCode), weight(weight), costPerOunce(costPerOunce) {}

string Package::getSenderAddress() const {
    return senderAddress;
}

string Package::getRecipientAddress() const {
    return recipientAddress;
}

double Package::calculateCost() const {
    return weight * costPerOunce;
}