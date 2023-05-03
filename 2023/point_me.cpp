#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
  int a = 92;
  int *pi = &a;

  printf("%d\n", *pi);
  cout << "The answer is: %d" << *pi << endl;

  int var = 10;

  int *ptr = &var;
  *ptr = 20;
  int **ptr = &ptr;
  **ptr = 30;
}
