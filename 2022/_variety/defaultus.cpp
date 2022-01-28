#include <iostream>
#include <format>
using namespace std;

export module employee;

export struct Employee
{
  char firstInitial;
  char lastInitial;
  int employeeNumber;
  int salary;
};

int main()
{
  Employee anEmployee;
  anEmployee.firstInitial = 'J';
  anEmployee.lastInitial = 'D';
  anEmployee.employeeNumber = 'D';
  anEmployee.salary = 800000;

  cout << format("Employee: {}{}", anEmployee,firstInitial, anEmployee.lastInitial) << endl;
}
