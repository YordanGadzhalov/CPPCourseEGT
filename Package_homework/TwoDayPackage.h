#include "Package.h"

class TwoDayPackage : public Package {
public:
    TwoDayPackage(const string& senderAddress, const string& recipientAddress,
        const string& city, const string& state, const string& zipCode,
        double weight, double costPerOunce, double flatFee);

    double calculateCost() const override;

private:
    double flatFee;
};
