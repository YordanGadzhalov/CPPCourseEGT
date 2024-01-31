#include "Drinks.h"

void Drinks::print()
{
    cout << "The beverage you requested is: " << name << " - " << type << endl 
        << "price: " << price << "$" << endl << "Quantity left: " << quantity << endl;
}

Drinks::Drinks(string name, string type, double price, double quantity)
{
    setName(name);
    setType(type);
    setPrice(price);
    setQuantity(quantity);
}

void Drinks::setName(string name)
{
    this->name = name;
}

double Drinks::calculatePrice()
{
    return 0.0;
}

string Drinks::getName()
{
    return this->name;
}

void Drinks::setPrice(double price)
{
    this->price = price;
}

double Drinks::getPrice()
{
    return this->price;
}

void Drinks::setType(string type)
{
    this->type = type;
}

//string Drinks::getType()
//{
//    return this->type;
//}

void Drinks::setQuantity(double quantity)
{
    this->quantity = quantity;
}

double Drinks::getQuantity()
{
    return this->quantity;
}
