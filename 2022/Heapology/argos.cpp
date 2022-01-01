#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
  int *p = new int[3];
  p[0] = 4;
  p[1] = 3;
  p[2] = 2;

  cout << "The values are: " << p[0] << ' ' << p[1] << ' ' << p[2] << endl;

  delete[] p;
  p=nullptr;

  cout << "The values are: " << p[0] << ' ' << p[1] << ' ' << p[2] << endl;
  return 0;
}
