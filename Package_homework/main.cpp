#include <iostream>
#include <vector>
#include "Package.h"
#include "TwoDayPackage.h"
#include "OvernightPackage.h"

int main() {
   
    std::vector<Package*> packages;

    
    TwoDayPackage twoDayPackage("Ul.Vunev 5", "Ul.Parol 4", "Sofia", "A", "51233", 25.0, 1.0, 5.0);
    OvernightPackage overnightPackage("Ul.Petre 25", "Ul.Emil M 55", "Varna", "O", "10043", 10.0, 4.0, 10.0);
    Package regularPackage("Business Center", "Ul.Mih K 12", "Burgas", "OV", "66223", 10.0, 2.0);

   
    packages.push_back(&twoDayPackage);
    packages.push_back(&overnightPackage);
    packages.push_back(&regularPackage);

    
    double totalShippingCost = 0.0;
    for (const auto& package : packages) {
        
        cout << "Sender Address: " << package->getSenderAddress() << endl;
        cout << "Recipient Address: " << package->getRecipientAddress() << endl;

      
        double shippingCost = package->calculateCost();
        cout << "Shipping Cost: $" << shippingCost << endl;

        
        totalShippingCost += shippingCost;

        cout << endl;
    }

    cout << "Total Shipping Cost for All Packages: $" << totalShippingCost << endl;

    return 0;
}