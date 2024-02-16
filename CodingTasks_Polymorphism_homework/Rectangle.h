#pragma once
#include "Shape.h"
using namespace std;

class Rectangle : public Shape {
private:
    double width;
    double height;

public:
    Rectangle(const string color, double width, double height);
    double area() const override;
    void draw() const override;
};
