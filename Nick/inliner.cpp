#include <print>
using namespace std;

// inline functions
inline int square(int x)
{
  return x * x; 
}

int main()
{
  int num = 5;
  print("The square of {} is: {}.\n", num, square(num));
}
