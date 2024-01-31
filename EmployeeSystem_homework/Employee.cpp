#include "Employee.h"

Employee::Employee(string name, string employeeID, string position)
{
    setName(name);
    setEmployeeID(employeeID);
    setPosition(position);
}

void Employee::display()
{
    cout << "Employee: " << getName() << endl << "ID: " 
        << getEmployeeID() << endl << "Position: "
        << getPosition() << endl;
}

void Employee::setName(string name)
{
    this->name = name;
}

string Employee::getName() const
{
    return this->name;
}

void Employee::setEmployeeID(string employeeID)
{
    this->employeeID = employeeID;
}

string Employee::getEmployeeID() const
{
    return this->employeeID;
}

void Employee::setPosition(string position)
{
    this->position = position;
}

string Employee::getPosition() const
{
    return this->position;
}
