#include <iostream>

int main()
{
  int array[5]{ 2, 4, 6, 8, 10 };
  int sum = 0;
  int *ptr = &array[0];

  for(int i = 0; i < 5; i++)
  {
    sum += *ptr;
    ptr++;
  }

  std::cout <<  "The sum is: " <<  sum << std::endl;
  return 0;
}
