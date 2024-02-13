#pragma once
#include <string>
using namespace std;
#include "Workstation.h"

class Employee {
private:
	string name;
	string type;
	int age;
	Workstation* workstation;

public:
	Employee(string, string, int, Workstation*);

	static Employee* parseEmployee(pugi::xml_node);

	friend ostream& operator<<(ostream& os, const Employee& employee);

};