#include <iostream>
using namespace std;

void PrintValue(int x);

int main()
{

  int z = 50;
  PrintValue(z);

  return 0;
}

void PrintValue(int x)
{
  cout << "The Integer is: " << x << endl;
}