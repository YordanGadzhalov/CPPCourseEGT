#include <iostream>
#include <string>
#include "Halls.h"
using namespace std;


Halls::Halls(string hallName, int capacity){
    setName(hallName);
    setSeats(capacity);
}

Halls::Halls(string name, int seat, vector<Projections> projectionsList)
    :projectionsList(projectionsList){
    setName(name);
    setSeats(seats);
}

void Halls::addProjection(Projections obj){
    this->projectionsList.push_back(obj);
}

void Halls::setName(string name){
    this->name = name;
}

void Halls::setSeats(int capacity){
    this->seats = capacity;
}

void Halls::print(){
    for(int i = 0; i < this->projectionsList.size(); i++){
        cout << "Projection is " 
        << this->projectionsList.at(i).getSoldTickets() << " "
        << this->projectionsList.at(i).getMovieName() << " ";
        cout << endl;
    }
}

vector<Projections> Halls::getProjectionsList(){
    return this->projectionsList;
}