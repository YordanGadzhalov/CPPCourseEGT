#include <iostream>
#include <string>
#include "Projections.h"
#include <vector>
using namespace std;


class Halls{
private:
    string name;
    int seats;
    vector<Projections> projectionsList;

public:
    Halls(string , int, vector<Projections>);
    Halls(string, int);
    void setProjectsList(vector<Projections>);
    vector<Projections> getProjectionsList();
    void addProjection(Projections);
    void setName(string);
    void setSeats(int);
    void print();    
    
};