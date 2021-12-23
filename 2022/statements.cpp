#include <iostream>

int addNumbers( int firstparam, int secondparam )
{
  return firstparam + secondparam;
}

int multiplyNumbers( int firstparam, int secondparam )
{
  return firstparam * secondparam;
}

int main()
{
  int first_number { 3 };
  int second_number { 7 };

  std::cout << "First number : " << first_number << std::endl;
  std::cout << "Second number : " << second_number << std::endl;

  int sum = addNumbers( first_number, second_number);
  std::cout << "Sum is: " << sum << std::endl;

  int mul = multiplyNumbers(first_number, second_number);
  std::cout << "Mul is: " << mul << std::endl;
  return 0;
}
