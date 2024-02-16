#include "Circle.h"
#include <iostream>
#include <cmath>

Circle::Circle(const string color, double radius) : Shape(color), radius(radius) {}

double Circle::area() const {
    return M_PI * radius * radius;
}

void Circle::draw() const {
    std::cout << "Drawing a " << color << " circle" << std::endl;
}