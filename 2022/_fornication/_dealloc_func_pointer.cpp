#include <iostream>
using namespace std;

int* Func();

// You will use the memory but not own it.
void Use(int* noptrInt);

int main()
{
  // Take Ownership of the Memory.

  int* optrNewInt = Func();


  Use(optrNewInt);


  // Main must now delete malloc.

  delete optrNewInt;

  // Even though you've deleted malloc,
  // You are still occupying an address,
  // So purge it. Don't create dangling pointers!

  optrNewInt = nullptr;

  return 0;

}

void Use(int* noptrInt)
{
  // Use ptr but don't delete it.
  
}

int* Func()
{
  return new int;
}
