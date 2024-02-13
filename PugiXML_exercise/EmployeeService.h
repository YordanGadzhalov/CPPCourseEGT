#pragma once
#include "Employee.h"
#include <vector>
using namespace std;


class EmployeeService {
private:
	static pugi::xml_document doc;
	static vector<Employee*> employeesList;

public:
	static void parseEmployeesData();
	static vector<Employee*> getEmployeesList();

};
