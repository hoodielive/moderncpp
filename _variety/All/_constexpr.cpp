#include <iostream>

using namespace std;

int main()
{
  constexpr int n = 123;
  constexpr double d = 456.78; 
  constexpr double d2 = d;

  int x = 123;  
  // constexpr int n2 = x; // error because x is not known at compile time.

  cout << n << endl;
  cout << d << endl;
  cout << d2 << endl;
  cout << x << endl;
 // cout << n2 << endl; // error
}
