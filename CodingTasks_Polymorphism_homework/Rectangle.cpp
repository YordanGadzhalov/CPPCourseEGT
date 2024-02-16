#include "Rectangle.h"
#include <iostream>

Rectangle::Rectangle(const string color, double width, double height) : Shape(color), width(width), height(height) {}

double Rectangle::area() const {
    return width * height;
}

void Rectangle::draw() const {
    std::cout << "Drawing a " << color << " rectangle" << std::endl;
}