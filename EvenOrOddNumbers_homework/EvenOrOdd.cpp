#include <iostream>
using namespace std;


int main()
{
    int n;
    cout << "How many numbers do you want to check ?" << endl;
    cin >> n;

    for (int i = 0; i < n; i++) {
        int number;
        cin >> number;
        if (number % 2 == 0) {
            cout << "The number is even!" << endl;
        }
        else {
            cout << "The number is odd!" << endl;
        }
    }
}
