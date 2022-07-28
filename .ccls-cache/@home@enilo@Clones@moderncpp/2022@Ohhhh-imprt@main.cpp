import <iostream>;
import <format>;
import employee;


using namespace std;


int main(int argc, char *argv[])
{
  Employee anEmployee;
  anEmployee.firstInitial = 'K';
  anEmployee.lastInitial = 'S';
  anEmployee.employeeNumber = 42;
  anEmployee.salary = 80000;

  cout << format("Employee: {}{}", anEmployee.firstInitial, anEmployee.lastInitial) << endl;
  cout << format("Number: {}", anEmployee.employeeNumber) << endl;
  cout << format("Salary: ${}", anEmployee.salary) << endl;

  return 0;
}
