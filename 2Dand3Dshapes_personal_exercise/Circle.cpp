#include "Circle.h"
#include <iostream>
using namespace std;

Circle::Circle(int radius, int a):TwoDimensionShapes(a){
    this->radius = radius;
}

void Circle::print()
{
    cout << "Circle print" << endl;
}

double Circle::getArea()
{
    cout << "Circle getArea" << endl;
    return 0.0;
}
