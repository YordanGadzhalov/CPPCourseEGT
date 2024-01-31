#include <iostream>
#include <string>
using namespace std;

class Student{
private:
string firstName;
string secondName;
int ID;
int facNum;

public:
Student(){};
Student(string firstName, string secondName, int ID, int facNum);
void SetFirstName(string firstName);
void SetSecondName(string secondName);
string GetFirstName();
string GetSecondName();
};

