#include "Alchoholic.h"

Alchoholic::Alchoholic(double volume, double tax, string name, string type, double price, double quantity)
    :Drinks(name , type , price , quantity)
{
    setVolume(volume);
    setTax(tax);

}

void Alchoholic::print() 
{
    Drinks::print();
    cout << "Alchoholic volume: " << getVolume() << endl << "Tax: " << getTax() << endl;
}

double Alchoholic::calculatePrice()
{
    double alchoholicPrice = getQuantity() * (getPrice() * getTax());
    cout << "Alchohol price is : ";
    return alchoholicPrice;
}

void Alchoholic::setVolume(double volume)
{
    this->volume = volume;
}

double Alchoholic::getVolume()
{
    return this->volume;
}

void Alchoholic::setTax(double tax)
{
    this->tax = tax;
}

double Alchoholic::getTax()
{
    return this->tax;
}
