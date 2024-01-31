#pragma once

#include <iostream>
#include "Shape.h"
using namespace std;

class ThreeDimensionShapes : public Shape {
private:
    int h; // Височина 


public:
    ThreeDimensionShapes(int, int);
    virtual void print();
    virtual double getArea();
    double getVolume();
    void setH(int);
    int getH();


};
