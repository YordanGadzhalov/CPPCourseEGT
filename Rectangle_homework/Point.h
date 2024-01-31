#pragma once
#include <iostream>
using namespace std;


class Point {
private:
    int x;
    int y;

public:
    Point(int x, int y);
    int getX() const;
    void setX(int x);
    int getY() const;
    void setY(int y);

};