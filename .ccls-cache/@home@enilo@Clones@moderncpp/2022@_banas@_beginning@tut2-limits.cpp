#include <cstdlib>
#include <iostream>
#include <string>
#include <limits> // provides min/max

using namespace std;

int g_iRandNum = 0;
const double PI = 3.14159265;

int main(int argc, char *argv[])
{

  bool bMarried = true;
  char chMyGrade = 'A';
  unsigned short int u16Age = 43;
  short int siWeight = 10000;

  cout << "Min Double" << numeric_limits<double>::min() << endl;
  cout << "Max Double" << numeric_limits<double>::max() << endl;

  return 0;
}
