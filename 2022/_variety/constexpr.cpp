#include <iostream>
using namespace std;



int main(int argc, char *argv[])
{
  constexpr int n = 123;
  constexpr double d = 456.78;
  constexpr double d2 = d;
  constexpr int x = 123;
  constexpr int n2 = x;

  cout << n << endl;
  cout << d << endl;
  cout << d2 << endl;
  cout << x << endl;
  cout << n2 << endl;

  return 0;
}
