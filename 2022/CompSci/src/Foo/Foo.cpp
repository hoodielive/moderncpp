#include "Foo.h"
#include <iostream>

using namespace std;

void Foo()
{
  int x = 42;
  cout << " x in foo(): " << x << endl;
  cout << " &x in foo(): " << &x << endl;
}
