#include <iostream>
#include <cstdio>

using namespace std; 

int main()
{
  double mydouble = 323.24;
  double& myreference = mydouble;

  printf("This is the stuff %f'\n'", myreference);

  myreference = 324552.23;

  printf("This is the stuff %f", myreference);

}
