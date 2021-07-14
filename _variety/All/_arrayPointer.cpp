#include <iostream>

using namespace std;


int main()
{
  int* p = new int[5];

  p[0] = 5;
  p[1] = 6;
  p[2] = 7;

  std::cout << "The values are: " << ' ' << p[0] << p[1] << p[2] << endl;

  delete[] p;

  std::cout << "The values are: " << ' ' << p[0] << p[1] << p[2] << endl;
}

