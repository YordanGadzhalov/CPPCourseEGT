#pragma once
#include <string>
using namespace std;

class Shape {
protected:
    string color;

public:
    Shape(const string color);
    virtual void draw() const;
};
