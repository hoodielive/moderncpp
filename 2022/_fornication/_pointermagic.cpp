#include <iostream>


#define LOG(x) std::cout << x << std::endl;

int main()
{
  int var = 8;
  int* ptr = &var;

  *ptr = 10;
  
  char* buffer = new char[8];
  memset(buffer, 0, 8);

  delete[] buffer;
  std::cin.get();
}
