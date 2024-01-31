#include <iostream>
#include "Box.h"
using namespace std;



int main()
{
    Box box1(20, 10, 8);
    Box box2(15, 6, 4);
    Box box3;
    box3 = box1 + box2;
    box3.print();






    return 0;
}
