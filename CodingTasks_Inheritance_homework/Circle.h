#pragma once
#include "Shape.h"


class Circle : public Shape {
public:
    Circle(const string color);
    void draw() const override;
};