#include <iostream>

using namespace std;

/** There is not return value */
void PrintHello();

int main()
{
  /** Main is the caller of the function.*/
  PrintHello();

  return 0;
}

void PrintHello()
{
  cout << "Howdy there partner!" << std::endl;
}
