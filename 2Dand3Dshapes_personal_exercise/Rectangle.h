#pragma once
#include "TwoDimensionShapes.h"
#include <string>
using namespace std;


class Rectangle : public TwoDimensionShapes {
public:
	Rectangle(int, int, int, string, char, int);
	virtual void print();
	virtual double getArea();
	void setSideB(int);
	int getSideB();

private:
	int sideB;
};
