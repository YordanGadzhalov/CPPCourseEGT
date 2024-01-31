#pragma once
#include <iostream>
using namespace std;


class Box {
private:
	int width;
	int length;
	int height;

public:
	Box();
	Box(int width, int length, int height);
	void setWidth(int width);
	int getWidth();
	void setLength(int length);
	int getLength();
	void setHeight(int height);
	int getHeight();
	void print();

	Box operator+(Box const& box2); // overload operator +


};