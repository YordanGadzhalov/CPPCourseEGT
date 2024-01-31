#include "Square.h"
#include <iostream>

using namespace std;

Square::Square(int a, int side) :TwoDimensionShapes(a) {
	this->side = side;
}

void Square::print()
{
	cout << "Square CPP" << endl;
}

double Square::getArea() {
	cout << "Square Area: " << endl;
	return 0.0;
}
