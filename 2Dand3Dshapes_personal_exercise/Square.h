#pragma once
#include "TwoDimensionShapes.h"
using namespace std;


class Square : public TwoDimensionShapes {
private:
	int side;

public:
	Square(int ,int);
	virtual void print();
	virtual double getArea();


};
