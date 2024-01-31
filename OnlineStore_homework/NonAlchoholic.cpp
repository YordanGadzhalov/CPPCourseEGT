#include "NonAlchoholic.h"

NonAlchoholic::NonAlchoholic(string name, string type, double price, double quantity, double liters, double cityTax)
    :Drinks(name, type, price, quantity)
{
    setLiters(liters);
    setCityTax(cityTax);
}

void NonAlchoholic::print()
{
    Drinks::print();
    cout << "Liters: " << getLiters() << endl << "City tax: " << getCityTax() << endl;
}

double NonAlchoholic::calculatePrice()
{
    double nonAlchoholicPrice = Drinks::getQuantity() * Drinks::getPrice() + getCityTax();
    cout << "Price : ";
    return nonAlchoholicPrice;

}

void NonAlchoholic::setLiters(double liters)
{
    this->liters = liters;
}

double NonAlchoholic::getLiters()
{
    return this->liters;
}

void NonAlchoholic::setCityTax(double cityTax)
{
    this->cityTax = cityTax;
}

double NonAlchoholic::getCityTax()
{
    return this->cityTax;
}
