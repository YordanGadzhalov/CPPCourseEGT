#pragma once
#include <iostream>
using namespace std;


class Package {
public:
    Package(const string& senderAddress, const string& recipientAddress,
        const string& city, const string& state, const string& zipCode,
        double weight, double costPerOunce);

    string getSenderAddress() const;
    string getRecipientAddress() const;

    virtual double calculateCost() const;

private:
    string senderAddress;
    string recipientAddress;
    string city;
    string state;
    string zipCode;
    double weight;
    double costPerOunce;
};

