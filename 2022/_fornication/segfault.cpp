#include <iostream>
using namespace std;


int *Func();
int main()
{
  int *xPtr = Func();
  cout << "The Value pointed to by xPtr is: " << *xPtr << endl;
  return 0;
}

int *Func()
{
  int x = 5;
  return &x;
}
