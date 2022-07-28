#include <iostream>
using namespace std;


int Func(int* c);


int main(int argc, char *argv[])
{
  int x = 5;

  int *j = &x;

  cout << "The address of x is: " << &j << endl;
  cout << "The value of x is: " << *j << endl;

  x = 10;
  
  cout << "The value of x is: " << *j << endl;
  cout << "The value of x is: " << sizeof(*j) << endl;

  int* p = j;

  std::cout << "The value of p is :"<< p <<  std::endl;

  int num = Func(p);

  std::cout << "The value that emanates from Func(p) is: " << num << std::endl;
  return 0;
}

int Func(int* c)
{
  return *c;
}
