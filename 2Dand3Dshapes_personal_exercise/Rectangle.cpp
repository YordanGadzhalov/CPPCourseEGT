#include "Rectangle.h"
#include "TwoDimensionShapes.h"
#include <iostream>
using namespace std;

Rectangle::Rectangle(int a, int size, int position, string sh, char ch, int sideB)
    :TwoDimensionShapes(a, size, position, sh, ch)
{
    setSideB(sideB);
}

void Rectangle::setSideB(int side)
{
    this->sideB = side;
}

int Rectangle::getSideB()
{
    return this->sideB;
}

void Rectangle::print()
{
    cout << "We are in rectangle" << endl;
    // TwoDimensionShapes::print();
}

double Rectangle::getArea()
{
    cout << "We are in getArea rectangle ";
    return getSideB() * Shape::getA();
}
