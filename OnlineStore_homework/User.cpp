#include "User.h"
#include "User.h"

User::User(string username)
{
	setUsername(username);
}

User::User(string username, vector<Orders> purchases) : purchases(purchases)
{
	setUsername(username);
}

void User::setUsername(string username)
{
	this->username = username;
}

string User::getUsername()
{
	return this->username;
}


void User::addPurchase(Orders purchase)
{
	purchases.push_back(purchase);
}

vector<Orders> User::getPurchase()
{
	return purchases;
}
