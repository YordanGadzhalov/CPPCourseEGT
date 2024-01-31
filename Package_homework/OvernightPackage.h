#pragma once
#include "Package.h"
using namespace std;

class OvernightPackage : public Package {
public:
    OvernightPackage(const string& senderAddress, const string& recipientAddress,
        const string& city, const string& state, 
        const string& zipCode, double weight, double costPerOunce, double overnightFee);

    double calculateCost() const override;

private:
    double overnightFee;
};