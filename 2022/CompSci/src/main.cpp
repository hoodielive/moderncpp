#include <iostream>
#include "./Foo/Foo.h"

using namespace std;


int main(int argc, char *argv[])
{
  int num = 7;

  // Give me the value.
  cout << "Value: " << num << endl;

  // This will return a stack memory address so:
  // The number is going to be huge.

  cout << "Address: " << &num << endl;

  Foo();

  return 0;
}
