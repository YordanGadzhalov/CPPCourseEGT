#pragma once
#include <iostream>
#include "Employee.h"
#include <vector>
using namespace std;

class Department : public Employee{
private:
	string departmentName;
	int numEmployees = 0;
	vector<Employee*> employees;

public:
	Department(string departmentName, int numEployees);
	void addEmployee(Employee*);
	void displayEmployees();


	
};
