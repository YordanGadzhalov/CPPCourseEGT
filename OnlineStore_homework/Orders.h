#pragma once
#include <iostream>
#include "Drinks.h"
#include <vector>
using namespace std;

class Orders {

private:
	vector<Drinks*>orders;
	string date;
	double totalPrice;
	string purchaseNum; // static int - doesn't reset the number to 0 

public:
	Orders(string date, string purchaseNum);
	void addDrink(Drinks*);
	void printVectorOrders();
	void setDate(string date);
	string getDate();
	void setPurchaseNum(string purchaseNum);
	string getPurchaseNum();
};
