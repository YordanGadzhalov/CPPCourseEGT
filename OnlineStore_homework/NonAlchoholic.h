#pragma once
#include <iostream>
#include "Drinks.h"
using namespace std;

class NonAlchoholic : public Drinks{
private:
	double liters;
	double cityTax;


public:
	NonAlchoholic(string name, string type, double price, double quantity ,double liters, double cityTax);
	void print();
	virtual double calculatePrice();
	void setLiters(double liters);
	double getLiters();
	void setCityTax(double cityTax);
	double getCityTax();
};