#pragma once
#include <iostream>
#include <vector>
#include "Drinks.h"
#include "Orders.h"
using namespace std;

class User {

private:
	string username;
	vector<Orders> purchases;
	
public:
	User(string username);
	User(string username, vector<Orders> purchases);
	void printUserOrder();
	void setUsername(string username);
	string getUsername();
	void addPurchase(Orders);
	vector<Orders>getPurchase();


};