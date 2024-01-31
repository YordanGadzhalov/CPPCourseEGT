#include <iostream>
using namespace std;





int main()
{
    int seats[10] = {};

    int size = 10;


    int s;
    cout << "I want seat: ";
    cin >> s;

    seats[s] = 1;

    for (int i = 0; i < 10; i++) {
        cout << seats[i] << endl;
    }


    int currentCustomer = 0;

    while (currentCustomer < size) {
        currentCustomer++;
        int newS;
        cout << "I want seat ";
        cin >> newS;

        if (seats[newS] == 0) {
            seats[newS] = 1;
            cout << "Seat" << newS << "is seated " << endl;
        }
        else {
            cout << "we have to find free seats " << endl;
            for (int j = 0; j < 10; j++) {
                if (seats[j] == 0) {
                    seats[j] = 1;
                    cout << "new free seat " << j << endl;
                    break;
                }
            }

        }

    }
    for (int i = 0; i < 10; i++) {
        cout << seats[1] << endl;
    }
    return 0;
}