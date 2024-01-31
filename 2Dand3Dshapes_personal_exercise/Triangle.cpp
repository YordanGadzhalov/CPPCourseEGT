#include "Triangle.h"
#include <iostream>
using namespace std;

Triangle::Triangle(int sideB, int sideC, int a) :TwoDimensionShapes(a) {
    this->sideB = sideB;
    this->sideC = sideC;
}

void Triangle::print()
{
    cout << "Triangle print" << endl;
}

double Triangle::getArea()
{
    cout << "Triangle getArea" << endl;
    return 0.0;
}
