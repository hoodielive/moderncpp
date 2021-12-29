#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
  int *x = new int;
  // alias the memory in x.
  int &y = *x;
  y = 4;

  cout << &x << endl;
  cout << x << endl;
  cout << *x << endl;

  cout << &y << endl;
  cout << y << endl;
  cout << *y << endl;


  return 0;
}
