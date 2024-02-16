#pragma once
#include "Shape.h"
using namespace std;

class Circle : public Shape {
private:
    double radius;

public:
    Circle(const string color, double radius);
    double area() const override;
    void draw() const override;
};