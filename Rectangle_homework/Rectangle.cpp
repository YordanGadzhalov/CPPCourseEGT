#include "Rectangle.h"
#include "Point.h"

Rectangle::Rectangle(const Point& p1, const Point& p2, const Point& p3, const Point& p4) :p1(p1), p2(p2), p3(p3), p4(p4) {}

bool Rectangle::isRectangle() {
    if (this->p1.getX() == this->p3.getX() && this->p2.getX() == this->p4.getX()) {
        return true;
    }
    return false;
}

bool Rectangle::isSquare() {
    if (isRectangle()) {
        int sideA = calculateLength(p1.getX(), p2.getX());
        int sideB = calculateLength(p1.getY(), p3.getY());
        if (sideA == sideB) {
            return true;
        }
    }
    return false;
}

int Rectangle::calculateLength(int first, int second) {
    return second - first; // Second is always greater than first
}

void Rectangle::setP1(const Point& p1) {
    Rectangle::p1 = p1;
}

const Point& Rectangle::getP1() const {
    return p1;
}

void Rectangle::setP2(const Point& p2) {
    Rectangle::p2 = p2;
}

const Point& Rectangle::getP2() const {
    return p2;
}

void Rectangle::setP3(const Point& p3) {
    Rectangle::p3 = p3;
}

const Point& Rectangle::getP3() const {
    return p3;
}

void Rectangle::setP4(const Point& p4) {
    Rectangle::p4 = p4;
}

const Point& Rectangle::getP4() const {
    return p4;
}