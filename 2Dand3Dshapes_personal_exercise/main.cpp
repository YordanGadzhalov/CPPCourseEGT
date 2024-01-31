#include <iostream>
#include <string>
#include <vector>
#include "TwoDimensionShapes.h"
#include "ThreeDimensionShapes.h"
#include "Circle.h"
#include "Triangle.h"
#include "Square.h"
#include "Rectangle.h"

using namespace std;




int main() {

    Shape* sPtr1 = new TwoDimensionShapes(30, 4 , 5 , "2D" ,'%');
    Shape* sPtr2 = new ThreeDimensionShapes(15, 20);
    Shape* sPtr3 = new Circle(20, 20);
    Shape* sPtr4 = new Triangle(20, 20, 30);
    Shape* sPtr5 = new Square(20, 20);
    Shape* sPtr6 = new Rectangle(20, 20, 20, "Rectangle" , '%' , 20);


    vector<Shape*> myShapes;
    myShapes.push_back(sPtr1);
    myShapes.push_back(sPtr2);
    myShapes.push_back(sPtr3);
    myShapes.push_back(sPtr4);
    myShapes.push_back(sPtr5);
    myShapes.push_back(sPtr6);



    for (int i = 0; i < myShapes.size(); i++) {
        myShapes.at(i)->print();
        double area = myShapes.at(i)->getArea();
        cout << area << endl;
  

    }







    return 0;
}