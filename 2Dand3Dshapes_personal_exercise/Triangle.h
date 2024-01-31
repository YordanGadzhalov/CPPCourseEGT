#pragma once
#include "TwoDimensionShapes.h"


class Triangle : public TwoDimensionShapes {
private:
	int sideB;
	int sideC;

public:
	Triangle(int, int, int);
	void print();
	double getArea();
};