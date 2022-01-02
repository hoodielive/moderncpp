#include <iostream>
using namespace std;

void Func(int& x) ;

int main()
{
  int x = 5;
  Func(x);
  return 0;
}

void Func(int& y) 
{
  y = 20;
  cout << "The Value of y is: " << y << endl;
};
