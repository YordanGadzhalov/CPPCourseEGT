#include <iostream>
#include <string>
#include "Student.h"
using namespace std;


void Student::SetFirstName(string firstName){
    this->firstName = firstName;
};

void Student::SetSecondName(string secondName){
    this->secondName = secondName;
};

string Student::GetFirstName(){
    return this->firstName;
};

string Student::GetSecondName(){
    return this->secondName;
};

Student::Student(string firstName, string secondName, int ID, int facNum){
    this->firstName = firstName;
    this->secondName = secondName;
    this->ID = ID;
    this->facNum = facNum;
};

