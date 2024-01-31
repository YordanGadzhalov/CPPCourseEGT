#include <iostream>
#include "ThreeDimensionShapes.h"
#include "Shape.h"
using namespace std;

ThreeDimensionShapes::ThreeDimensionShapes(int a, int h) :Shape(a) {
    this->h = h;
}

void ThreeDimensionShapes::print() {
    cout << "We are in 3D print" << this->h << endl;
}

double ThreeDimensionShapes::getArea() {
    cout << "3D Shape area: " << endl;
    return 0.0;
}

double ThreeDimensionShapes::getVolume() {
    cout << "3D Shape Volume: " << endl;
    return 0.0;
}