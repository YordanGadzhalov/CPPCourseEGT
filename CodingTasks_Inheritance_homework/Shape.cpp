#include "Shape.h"
#include <iostream>

Shape::Shape(const string color) : color(color) {}

void Shape::draw() const {
    std::cout << "Drawing a shape of color " << color << std::endl;
}