#pragma once
#include "Shape.h"
using namespace std;

class Rectangle : public Shape {
public:
    Rectangle(const string color);
    void draw() const override;
};