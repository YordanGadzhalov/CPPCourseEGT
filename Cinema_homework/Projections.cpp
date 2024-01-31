#include <iostream>
#include <string>
#include "Projections.h"
   

Projections::Projections(string movieName, int tickets){
    setMovieName(movieName);
    setSoldTickets(tickets);
}

void Projections::setMovieName(string movieName){
    if(movieName.length() > 5){
        this->movieName = movieName;
    }
    else{
        this->movieName = "";
        cerr << "Movie name is too short!" << endl;
    }
}

void Projections::setSoldTickets(int tickets){
    if(tickets >= 0){
        this->soldTickets = tickets;
    }
    else{
        this->soldTickets = 0;
    }
}

int Projections::getSoldTickets(){
    return this->soldTickets;
}

string Projections::getMovieName(){
    return this->movieName;
}