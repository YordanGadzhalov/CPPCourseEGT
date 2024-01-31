#include <iostream>
#include <string>
using namespace std;


class Projections{
private:
    string movieName;
    int soldTickets;

public:
    Projections(string , int);
    void setMovieName(string);
    void setSoldTickets(int);
    string getMovieName();
    int getSoldTickets();
};