#include <iostream>


int main(int argc, char *argv[])
{
  unsigned int x = 7;
  unsigned int y = 10;

  int test_val = (x - y);

  if (test_val < 0)
  {
    std::cerr << "Warning: unsigned value cast to signed int result in a negative value" << "\n";
  }
  return 0;
}
