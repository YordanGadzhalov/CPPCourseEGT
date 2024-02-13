#include <iostream>
#include "EmployeeService.h"



int main()
{

	EmployeeService::parseEmployeesData();

	for (auto employee : EmployeeService::getEmployeesList()) {
		cout << *employee << endl;
	}


	return 0;
}

