#include "Circle.h"
#include <iostream>

Circle::Circle(const string color) : Shape(color) {}

void Circle::draw() const {
    std::cout << "Drawing a " << color << " circle" << std::endl;
}
