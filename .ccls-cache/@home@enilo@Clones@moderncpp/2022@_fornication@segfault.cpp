#include <iostream>
using namespace std;

int *Func(int* x);

int main() 
{
  int *xPtr = Func();
  cout << "The Value pointed to by xPtr is: " << *xPtr << endl;
  return 0;
}

int *Func(int* x) 
{
  int j = 13;
  x = &j;
  return &x;
}
