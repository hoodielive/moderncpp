#include <iostream>

using namespace std;

int main()
{
  // Malloc.

  int* p = new int;

  *p = 123;

  std::cout << "The pointed-to value is: " << *p << "\n";

  // De-alloc memory.
 
  delete p;

  std::cout << "The pointed-to value is: " << *p;

}
