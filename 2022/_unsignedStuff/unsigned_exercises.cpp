#include <iostream>

int main(int argc, char *argv[])
{

  unsigned int a = 7;
  unsigned int b = 8;

  std::cout << (a + b) << std::endl;

  unsigned int x = 10;
  unsigned int y = 20;

  std::cout << (y-x) << "\n";
  // Be careful here because its not going to be 10.
  std::cout << (x-y) << "\n";

  // Cast it back
  std::cout << (int)(x-y) << "\n";

  // Another way to cast it back to a signed integer is this:
  int z = x - y;

  std::cout << z << std::endl;
  return 0;
}

