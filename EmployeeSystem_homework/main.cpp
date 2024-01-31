#include <iostream>
#include "Employee.h"
#include "Department.h"
using namespace std;


int main()
{
    Employee emp1("George", "5799", "Leader");
    Employee emp2("Bush", "5744", "Worker");
    Employee emp3("Monk", "5766", "Client");

    Department dep1("Department 1", 0);

    dep1.addEmployee(&emp1);
    dep1.addEmployee(&emp2);
    dep1.addEmployee(&emp3);

    dep1.displayEmployees();

}