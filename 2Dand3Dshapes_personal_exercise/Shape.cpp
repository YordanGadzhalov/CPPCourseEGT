#include <iostream>
using namespace std;
#include "Shape.h"

Shape::Shape(int side) {
    this->a = side;
}

void Shape::setA(int side) {
    this->a = side;
}

int Shape::getA() {
    return this->a;
}

void Shape::print() {
    cout << "In Shape the side is " << this->a;
}

double Shape::getArea() {
    cout << "In shape the area is " << endl;
    return 0.0;
}
