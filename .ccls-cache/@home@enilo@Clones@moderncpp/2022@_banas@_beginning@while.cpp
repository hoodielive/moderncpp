#include <iostream>
#include <cstdlib>
#include <string>
#include <cmath>
#include <ctime>
using namespace std;

int main(int argc, char *argv[])
{
  srand(time(NULL));
 
  // The modulus insures that srand never
  // surpasses 100. Means up to.
 
  int randNum = rand () % 100;

  int i = 1;

  while(i != randNum)
  {
    i += 1;
  }
  cout << "The Random number is: " << i << endl;

  int j = 1;

  while(j <= 20)
  {
    if ((j % 2) == 0)
    {
      j += 1;
      continue;
    }

    if (j == 15) break;
    cout << j << endl;
    j += 1;
  }

  return 0;
}
