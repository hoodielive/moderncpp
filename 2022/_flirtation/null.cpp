#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
  int* p = nullptr; // ok!
  int* m = new int; // alloc mem for obj

  delete m; // dealloc

  // Cause a runtime error.
  *m = 5;

  // Check for valid pointer.
  if (m != nullptr) { *m = 5; }

  // Alternative.
  if (m) { *m = 5; }

  delete m;

  std::cout << m << std::endl;

  m = nullptr;

  std::cout << m << std::endl;
  return 0;
}
