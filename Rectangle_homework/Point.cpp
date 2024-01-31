#include "Point.h"


Point::Point(int x, int y) {
    setX(x);
    setY(y);
}

int Point::getX() const {
    return x;
}

void Point::setX(int x) {
    if (x >= 0 && x <= 20) {
        this->x = x;
    }
    else {
        this->x = 0;
        cout << "Invalid cords for X" << endl;
    }
}

int Point::getY() const {
    return y;
}

void Point::setY(int y) {
    if (x >= 0 && x <= 20) {
        this->y = y;
    }
    else {
        this->y = 0;
        cout << "Invalid cords for Y" << endl;
    }
}
