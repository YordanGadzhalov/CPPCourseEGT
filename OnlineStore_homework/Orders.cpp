#include "Orders.h"
#include <vector>



Orders::Orders(string date, string purchaseNum){
    setDate(date);
    setPurchaseNum(purchaseNum);
}

void Orders::addDrink(Drinks* d)
{
    this->orders.push_back(d);
}

void Orders::printVectorOrders()
{
    for (Drinks* order : orders) {
        order->print();
    }
}

void Orders::setDate(string date)
{
    this->date = date;
}

string Orders::getDate()
{
    return this->date;
}

void Orders::setPurchaseNum(string purchaseNum)
{
    this->purchaseNum = purchaseNum;
}

string Orders::getPurchaseNum()
{
    return this->purchaseNum;
}
