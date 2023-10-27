#include <iostream>
#include <string>
#include "Employee.h"
using namespace std;

Employee::Employee(string name_IN, string firstName_IN, int salary_IN)
{
    setName(name_IN);
    setFirstName(firstName_IN);
    setSalary(salary_IN);
}

void Employee::setName(string lastName_IN)
{
    lastname = lastName_IN;
}

void Employee::setFirstName(string firstName_IN)
{
    firstName = firstName_IN;
}
void Employee::setSalary(int salary_IN)
{
    if (salary_IN)
    {
        salary = salary_IN;
    }
    else
    {
        cout << "Illegal salary was set to 0" << endl;
        salary = 0;
    }
}
string Employee::getLastName() const
{
    return lastname;
}
string Employee::getFirstName() const
{
    return firstName;
}
int Employee::getSalary() const
{
    return salary;
}

/*
void Employee::upSalary(int per)
{
    salary *= 1 + per / 100.0;
}
实现方式错了 没用了
*/