#include <iostream>

using namespace std;


void myFunction(int& byref);

int main(int argc, char *argv[])
{

  int x = 123;
  myFunction(x);

  return 0;
}

void myFunction(int& byref)
{
  byref++;
  cout << "Argument passed by reference: " << byref;

}
