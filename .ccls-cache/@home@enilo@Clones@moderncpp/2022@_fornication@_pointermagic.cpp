#include <iostream>
#define LOG(x) std::cout << x << std::endl;

int main()
{
  int var = 8;
  int* ptr = &var;

  *ptr = 10;
  
  char* buffer = new char[8];
  //  memset(buffer, 0, 8);

  delete[] buffer;

  int i = 5;
  int *j = &i;

  std::cout << "The address of i is: " << j << std::endl;
  std::cout << "The value at address i is: " << *j << std::endl;
  std::cout << "The value at address i is: " << i << std::endl;

  std::cin.get();

}
