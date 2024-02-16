#pragma once
#include <string>
using namespace std;

class Shape {
protected:
    string color;

public:
    Shape(const string color);
    virtual double area() const = 0;
    virtual void draw() const = 0;
    virtual ~Shape() {}
};