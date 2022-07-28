#include <iostream>

using namespace std;


int main()
{
  int original = 100;
  int& original_ref = original;
  printf("Original: %d\n", original);
  printf("Reference: %d\n", original_ref);

  int new_value = 200;
  original_ref = new_value;
  printf("Original: %d\n", original);
  printf("Reference: %d\n", original_ref);
}
