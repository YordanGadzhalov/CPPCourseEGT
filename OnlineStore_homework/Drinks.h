#pragma once
#include <iostream>
using namespace std;

class Drinks {
private:
	string name;
	string type;
	double price;
	double quantity;

public:
	Drinks(string name, string type, double price, double quantity);
	virtual void print();
	virtual double calculatePrice();
	void setName(string name);
	string getName();
	void setPrice(double price);
	double getPrice();
	void setType(string type);
	string getType();
	void setQuantity(double quantity);
	double getQuantity();



};