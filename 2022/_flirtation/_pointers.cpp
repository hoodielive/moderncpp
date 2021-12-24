#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
  int* p;
  int* q;
  int *a, *b, *c;

  int i = 10;

  // address of i assigned to p.
  p = &i;
  *p = 20;
  int* p2 = p;

  // Deref pointers.
  cout << "Address of i: " << p << endl;
  cout << "Address of p2 is: " << &p2 << endl;

  // Sometimes its good to have a pointer that can point to a pointer.
  // **

  int** r = &p;

  cout << "Address of p: " << r << endl;
  cout << "Address of i: " << *r << endl;
  cout << "Value of i: " << **r << endl;

  return 0;
}
