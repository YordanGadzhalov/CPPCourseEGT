#pragma once
#include <iostream>
#include "Drinks.h"
using namespace std;


class Alchoholic : public Drinks{
private:
	double volume;
	double tax;
	
public:
	Alchoholic(double volume, double tax, string name, string type, double price, double quantity);
	void print();
	double calculatePrice();
	void setVolume(double volume);
	double getVolume();
	void setTax(double tax);
	double getTax();
};
