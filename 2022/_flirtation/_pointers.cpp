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

  // Sometimes its good to have a pointer that can point to a pointer. **

  int** r = &p;

  cout << "Address of p: " << r << endl;
  cout << "Address of i: " << *r << endl;
  cout << "Value of i: " << **r << endl;

  // Dynamic Allocation requires the use of the *new* keyword.
  // This is not good because unlike regular pointers, the memory
  // allocated is not automatically reclaimed.
  // You must provide the delete keyword to reclaim memory.
  // Newer versions of C++ tackle this problem with the introduction of
  // smart pointers.

  int* d = new int;

  delete d;

  // A pointer should be assigned null pointer when it does not contain or have been
  // assigned a valid address.
  // null = 0 or NULL

  int* g = 0; // null pointer (unused pointer)
  int*h = NULL; // null pointer
  
  // Newer versions of C++ use nullptr. Unlike the null or 0 counterpart when you specify
  // nullptr you gain the advantage of not having to implicitly convert to an integer type.
  // The literal has its on type: std::nullptr_t;

  int* bae = nullptr;
  bool bih = (bool) nullptr; // false
  std::nullptr_t myNull = nullptr; // This is okay!

  return 0;
}
