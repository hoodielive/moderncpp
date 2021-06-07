#include <iostream>
using namespace std;

void Swap(int& x, int&y);

int main()
{
  int x = 5, y = 10;

  Swap(x, y);
  
  cout << "This is the value of x: " << x << endl;
  cout << "This is the value of y: " << y << endl;
  return 0;
}

void Swap(int& x, int& y)
{
  int temp = x;
  x = y;
  y = temp;
}
