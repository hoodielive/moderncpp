#include <iostream>

using namespace std;


int main(int argc, char *argv[])
{
  int x = 5;
  int* ptr = new int[10];


  cout << "Address of the ptr is: " << ptr << endl;

  // ++ by int (4 bytes), you now not point to the HEAD. 
  // You are pointing to the next index.
  ptr++;

  cout << "The address of the ptr is now: " << ptr << endl;

  delete[] ptr;

  return 0;
}
