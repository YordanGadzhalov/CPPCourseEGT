#include <iostream>
using std::cout;
using std::endl;

#include "Date.h" 

int main() {
    Date d1; 
    Date d2(12, 17, 1998);
    Date d3(0, 99, 9045); 

    cout << "d1 is " << d1 << "\nd2 is " << d2 << "\nd3 is " << d3;
    cout << "\n\nd2 += 7 is " << (d2 += 7);
    cout << "\nd3 -= 7 is " << (d3 -= 7);

    d3.setDate(2, 28, 1992);
    cout << "\n\n  d3 is " << d3;
    cout << "\n++d3 is " << ++d3 << " (leap year allows 29th)";

    Date d4(7, 13, 2002);

    cout << "\n\nTesting the prefix increment operator:\n"
        << "  d4 is " << d4 << endl;
    cout << "++d4 is " << ++d4 << endl;
    cout << "  d4 is " << d4;

    cout << "\n\nTesting the postfix increment operator:\n"
        << "  d4 is " << d4 << endl;
    cout << "d4++ is " << d4++ << endl;
    cout << "  d4 is " << d4 << endl;

    Date d5(3, 1, 2004);

    cout << "\n\nTesting the prefix decrement operator:\n"
        << "  d5 is " << d5 << endl;
    cout << "--d5 is " << --d5 << endl;
    cout << "  d5 is " << d5;

    cout << "\n\nTesting the postfix increment operator:\n"
        << "  d1 is " << d1 << endl;
    cout << "d1-- is " << d1-- << endl;
    cout << "  d1 is " << d1 << endl;

    return 0;
} 