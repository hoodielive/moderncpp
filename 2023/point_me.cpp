#include <iostream>
#include <stdio.h>

using namespace std;

void afunction()
{
  std::cout << "A liking will happen" << std::endl;
  
}

int main()
{
  int a = 92;
  int *pi = &a;

  printf("%d\n", *pi);
  cout << "The answer is: %d" << *pi << endl;

  int var = 10;

  int *ptr = &var;
  *ptr = 20;

  afunction();
 // int **ptr = &ptr;
 // **ptr = 30;
}
