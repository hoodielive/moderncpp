#include "Cube.h"
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
  Cube c;

  c.setLength(3.48);
  double volume = c.getVolume();
  
  cout << "Volume: " << volume << endl;

  return 0;
}