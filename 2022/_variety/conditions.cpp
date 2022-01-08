#include <iostream>
using namespace std;

int main()
{
  int x = 256;
  if (x > 100 && x < 300)
  {
    cout << "The value is greater than 100 and less than 300." << '\n';
  }
  else
  {
    cout << "The value is not inside the (100 .. 300) range." << '\n';
  }

  bool mycondition = true;
  if (x > 100 || mycondition)
  {
    cout << "Either x is greater than 100 or the bool variable is true." << '\n';
  }
  else
  {
    cout << "x is not greater than 100 and the bool variable is false." << '\n';
  }

  bool mysecondition = !mycondition;

  return 0;
}
