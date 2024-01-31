#include "Department.h"

Department::Department(string departmentName, int numEployees)
{
	this->departmentName = departmentName;
	this->numEmployees = numEployees;
}

void Department::addEmployee(Employee* e)
{
	this->employees.push_back(e);
	numEmployees += 1;
}

void Department::displayEmployees()
{
	for (int i = 0; i < employees.size(); i++) {
		employees[i]->display();
		cout << endl;
	}
	cout << "Employees in the department: " << numEmployees << endl;
}
