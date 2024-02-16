#include <iostream>
#include "Circle.h"
#include "Rectangle.h"
using namespace std;

void printArea(const Shape& shape) {
    shape.draw();
    cout << "Area: " << shape.area() << endl;
}

int main() {
    Circle redCircle("red", 5.0);
    printArea(redCircle);

    Rectangle blueRectangle("blue", 4.0, 6.0);
    printArea(blueRectangle);

    return 0;
}