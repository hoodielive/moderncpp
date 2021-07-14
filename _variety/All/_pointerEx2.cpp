#include <iostream>

using namespace std;

int main()
{
  double object = 3423.43;
  double* gnosis = &object; 

  cout << "So the dereferenced instance is: " << *gnosis; 
}
