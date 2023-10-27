#include <iostream>
#include <string>
#include "Employee.h"
using namespace std;
int main()
{

    Employee employee1("Bob", "Jones", 2875);
    Employee employee2("Susan", "Baker", 3150);
    cout << "Employee 1:" << employee1.getLastName() << ' ' << employee1.getFirstName() << ";Yearly Salary:" << employee1.getSalary() * 12 << endl;
    cout << "Employee 2:" << employee2.getLastName() << ' ' << employee2.getFirstName() << ";Yearly Salary:" << employee2.getSalary() * 12 << endl;
    cout << "Incresing employee salaries by 10%" << endl;
    cout << "Employee 1:" << employee1.getLastName() << ' ' << employee1.getFirstName() << ";Yearly Salary:" << employee1.getSalary() * 1.1 * 12 << endl;
    cout << "Employee 2:" << employee2.getLastName() << ' ' << employee2.getFirstName() << ";Yearly Salary:" << employee2.getSalary() * 1.1 * 12 << endl;
}