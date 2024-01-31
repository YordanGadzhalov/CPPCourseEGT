#include <iostream>
#include <string>
#include <vector>
#include "Halls.h"
using namespace std;


class Cinema{
    private:
        string name;
        string address;
        vector<Halls> hallsList;

    public:
        Cinema(string, string, vector<Halls>);
        void setName(string);
        string getName();
        void setAddress(string);
        string getAddress();
        void setHallsList(vector<Halls>);
        vector<Halls> getHallsList();
        void addHalltoList(Halls);
        void addvectorOfHallsToList(vector<Halls>);
        void print();
};
