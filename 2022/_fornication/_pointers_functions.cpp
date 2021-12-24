#include <iostream>


int pointerFunction(int *j);


int main(int argc, char *argv[])
{
  int x = 5;
  int p = pointerFunction(&x);
    
  std::cout << "The address that *j points to is: " << &p << " and the value is " <<  *(&p) << "." << std::endl;

  return 0;
}

int pointerFunction(int *j)
{
  return *j;
}

