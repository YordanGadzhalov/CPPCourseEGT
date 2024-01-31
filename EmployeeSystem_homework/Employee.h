#pragma once
#include <iostream>
using namespace std;


class Employee {
private:
	string name;
	string employeeID;
	string position;

public:
	Employee(){}
	Employee(string name, string employeeID, string position);
	void display();
	void setName(string name);
	string getName() const;
	void setEmployeeID(string employeeID);
	string getEmployeeID() const;
	void setPosition(string position);
	string getPosition() const;
};
