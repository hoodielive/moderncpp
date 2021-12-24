#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
  int* p; 
  int* q;
  int *a, *b, *c;

  int i = 10; 
  p = &i; // address of i assigned to p.


  // Deref pointers.
  cout << "Address of i: " << p << endl;


  return 0;
}
