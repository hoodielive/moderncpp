#include <iostream>


int main(int argc, char *argv[])
{
  extern int i;
  int *ci = &i;
  int j = ci;

  j = 43;

  std::cout << i << "\n";
  std::cout << ci << "\n";
  std::cout << j << "\n";

  return 0;
}
