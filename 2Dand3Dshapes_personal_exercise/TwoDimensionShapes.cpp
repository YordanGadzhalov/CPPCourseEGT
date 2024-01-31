#include <iostream>
#include "TwoDimensionShapes.h"
using namespace std;

TwoDimensionShapes::TwoDimensionShapes(int a, int size, int position , string sh, char ch) :Shape(a) {}

void TwoDimensionShapes::print() {
    cout << "In 2D" << endl;
}

double TwoDimensionShapes::getArea() {
    cout << "In 2D getArea" << endl;
    return 0.0;
}

void TwoDimensionShapes::setSize(int size)
{
    this->size = size;
}

void TwoDimensionShapes::setPosition(int p)
{
    this->position = p;
}

void TwoDimensionShapes::setSh(string shap)
{
    this->sh = shap;
}

void TwoDimensionShapes::setCh(char ch)
{
    this->ch = ch;
}

int TwoDimensionShapes::getSize()
{
    return 0;
}

int TwoDimensionShapes::getPosition()
{
    return 0;
}

string TwoDimensionShapes::getSh()
{
    return string();
}

char TwoDimensionShapes::getCh()
{
    return 0;
}
