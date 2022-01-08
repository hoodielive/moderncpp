#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
  int* p = new int;

  *p = 43;

  cout << "The value on the heap is: " << *p << endl;

  delete p;

  return 0;
}
