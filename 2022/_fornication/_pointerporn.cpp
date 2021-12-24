#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
  int *p_number {};
  double *p_fractional_number {};

  int *p_number2 { nullptr };
  int *p_fractional_number2 { nullptr };
  

  cout << "Size of number pointer: " << sizeof(p_number) 
    << ", size of int: " << sizeof(int) << endl;

  cout << "Size of fractional_number pointer: " << sizeof(p_fractional_number)
    << ", size of double: " << sizeof(double) << endl;
    
  cout << "Size of number2 pointer: " << sizeof(p_number2)
    << ", size of int: " << sizeof(int) << endl;

  cout << "Size of p_fractional_number2 pointer: " << sizeof(p_fractional_number2)
    << ", size of double: " << sizeof(double) << endl;


  return 0;
}
