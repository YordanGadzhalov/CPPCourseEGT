#include "Box.h"

Box::Box()
{
}

Box::Box(int width, int length, int height)
{
	setWidth(width);
	setLength(length);
	setHeight(height);
}

void Box::setWidth(int width)
{
	this->width = width;
}

int Box::getWidth()
{
	return this->width;
}

void Box::setLength(int length)
{
	this->length = length;
}

int Box::getLength()
{
	return this->length;
}

void Box::setHeight(int height)
{
	this->height = height;
}

int Box::getHeight()
{
	return this->height;
}

void Box::print()
{
	cout << "Width is: " << getWidth() << endl
		<< "Length is: " << getLength() << endl
		<< "Height is: " << getHeight();
}

Box Box::operator+(Box const& box2)
{
	Box newBox;
	newBox.height = height + box2.height;
	newBox.setLength(1);
	newBox.setWidth(1);
	return newBox;
}
