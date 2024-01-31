#include <iostream>
#include <string>
#include "Cinema.h"
#include <vector>
using namespace std;

Cinema::Cinema(string name, string address, vector<Halls> halls){
    setName(name);
    setAddress(address);
    setHallsList(halls);
}

void Cinema::print(){
    cout << " Cinema name: " << getName() << "address: " 
    << address << endl;
    for(int i = 0; i < hallsList.size(); i++){
        hallsList.at(i).print();
        cout << endl;
    } 
}

void Cinema::addHalltoList(Halls hall){
    this->hallsList.push_back(hall);
}

void Cinema::setHallsList(vector<Halls> halls){
    this->hallsList = halls;
}

vector<Halls> Cinema::getHallsList(){
    return this->hallsList;
}

void Cinema::setName(string name){
    this->name = name;
}

string Cinema::getName(){
    return this->name;
}

void Cinema::setAddress(string address){
    this->address = address;
}

string Cinema::getAddress(){
    return this->address;
}