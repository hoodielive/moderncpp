#include <iostream>


int main(int argc, char *argv[])
{
  int* ptr = nullptr;
  int& ref = *ptr;

  ref = 10;

  std::cout << ref << std::endl;
  return 0;
}
