#include <iostream>
#include <string>

using namespace std;


void myFunction(int& byref);

void myConstFunction(const string& byconstref);
int main(int argc, char *argv[])
{

  int x = 123;
  myFunction(x);

  myConstFunction("Haddy mae.");

  return 0;
}

void myFunction(int& byref)
{
  byref++;
  cout << "Argument passed by reference: " << byref << endl;

}

void myConstFunction(const string& byconstref)
{
  cout << "Args passed by const ref: " << byconstref << '\n';
}
