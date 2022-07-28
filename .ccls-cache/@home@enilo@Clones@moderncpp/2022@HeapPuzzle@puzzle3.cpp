#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
  int *p;
  int *q;

  // Heap allocation.
  p = new int;

  // Heap allocation.
  q = p;

  // p = 8;
  *q = 8;

  // Print out 8.
  cout << *p << endl;
  
  // Allocate new heap or same heap?
  q = new int;

  // q is now 9
  *q = 9;

  // Print 8
  cout << *p << endl;

  // Print 9
  cout << *q << endl;

  return 0;
}
