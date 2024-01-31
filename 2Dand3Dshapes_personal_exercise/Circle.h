#pragma once
#include "TwoDimensionShapes.h"

class Circle : public TwoDimensionShapes{
private:
	int radius;

public:
	Circle(int, int);
	void print();
	double getArea();

};