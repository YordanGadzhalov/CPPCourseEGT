#include "Rectangle.h"
#include <iostream>

Rectangle::Rectangle(const string color) : Shape(color) {}

void Rectangle::draw() const {
    std::cout << "Drawing a " << color << " rectangle" << std::endl;
}