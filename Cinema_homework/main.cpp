#include <iostream>
#include <string>
#include "Halls.h"
#include "Projections.h"
#include "Cinema.h"
using namespace std;




int main(){

    Projections sc1("STAR WARS", 40);
    Projections sc2 ("Dune 2", 33);
    Halls h1("Hall 8", 80, Projections);

    Projections.push_back(sc1);
    Projections.push_back(sc2);








    return 0;
}