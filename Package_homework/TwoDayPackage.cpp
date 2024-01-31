#include "TwoDayPackage.h"

TwoDayPackage::TwoDayPackage(const string& senderAddress, const string& recipientAddress,
    const string& city, const string& state, const string& zipCode,
    double weight, double costPerOunce, double flatFee)
    : Package(senderAddress, recipientAddress, city, state, zipCode, weight, costPerOunce), flatFee(flatFee) {}

double TwoDayPackage::calculateCost() const {
    
    return Package::calculateCost() + flatFee;
}