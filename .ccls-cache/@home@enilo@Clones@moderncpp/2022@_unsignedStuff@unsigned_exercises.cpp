#include <iostream>

int main(int argc, char *argv[])
{

  unsigned int a = 7;
  unsigned int b = 8;

  std::cout << sizeof(unsigned int) << std::endl;
  std::cout << (a + b) << std::endl;

  unsigned int x = 10;
  unsigned int y = 20;

  int array[5]{ 1, 2, 3, 4, 5 };

  // Crash bandicoot.
  array[6] = 47;

  std::cout << sizeof(array) << std::endl;

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

