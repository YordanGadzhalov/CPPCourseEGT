#include <iostream>
#include <set>
#include <map>
using namespace std;


int main()
{
    map <int, int> counters; // key-value
    int size = 15;
    int arr[] = {1,2,2,3,3,3,4,4,4,4,5,5,5,5,5};
   // int size = sizeof(arr) / sizeof(arr[0]);
    set<int> mySet;

    mySet.insert(arr, arr + size);

    for (int el : mySet) {
        cout << el << " ";
        counters[el] = 0;
    }
    cout << endl;

    int counter = 0;
   
    for (int i = 0; i < size - 1; ++i) {
        if (arr[i] == arr[i + 1]) {
            counter++;
        }
        else
        {
            counter++;
            if (counters[arr[i]] < counter) {
                counters[arr[i]] = counter;
            }
            counter = 0;
        }
    }
    for (pair<int, int> el : counters) {
        cout << el.first << " -> " << el.second << endl;
    }
    return 0;

}
