#include <iostream>
using namespace std;

template<typename T>
T max(T a, T b)
{
  if (a > b) { return a; }
  return b;
}


int main()
{
  cout << "max(3, 5): " <<  max(4, 7) << endl;
  cout << "max('a', 'b'): " << max('a', 'b') << endl;

  return 0;
}
