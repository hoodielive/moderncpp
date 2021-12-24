#include <iostream>



int main(int argc, char *argv[])
{
  int x = 5;
  int& r = x; // r is an alias to x
  int &s = x; // alternative syntax

  // A Reference HAS to be initialized.
  // thus: int& t; would cause an error.

  r = 10;

  // A pointer has its own address.
  // A reference is simply an alias and doesn't have its own address.

  int* ptr = &r; /* ptr assigned address to x */
  return 0;
}
