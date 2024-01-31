#pragma once
#include <string>

class Shape {
private:
    int a;

public:
    Shape(int);
    virtual void print();
    virtual double getArea();
    void setA(int);
    int getA();

};

