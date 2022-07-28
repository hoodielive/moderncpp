#include <iostream>
using namespace std;

void zero_array(int numbers[], size_t size);
void print_array(int numbers[], size_t size);

int main(int argc, char *argv[])
{

  int my_numbers[] { 1, 2, 3, 4, 5 };

  zero_array(my_numbers, 5);
  print_array(my_numbers, 5);

  return 0;
}

void zero_array(int numbers[], size_t size)
{
  for (size_t i{0}; i < size; ++i)
  {
    numbers[i] = 0;
  }
}

void print_array(int numbers[], size_t size)
{
  // doesn't know how many elements is in the array.

  for (size_t i{0}; i < size; ++i)
  {
    cout << numbers[i] << endl;
  }
}
