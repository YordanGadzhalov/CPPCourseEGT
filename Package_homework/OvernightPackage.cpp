#include "OvernightPackage.h"

OvernightPackage::OvernightPackage(const string& senderAddress,
    const string& recipientAddress, const string& city,
    const string& state, const string& zipCode, double weight,
    double costPerOunce, double overnightFee)
    : Package(senderAddress, recipientAddress, city, state, zipCode, weight, costPerOunce), overnightFee(overnightFee) {}

double OvernightPackage::calculateCost() const {
    return Package::calculateCost() + overnightFee;
}