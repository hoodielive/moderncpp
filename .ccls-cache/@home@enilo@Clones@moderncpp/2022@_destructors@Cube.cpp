#include "Cube.h"
#include <iostream>

using namespace std;



Cube::Cube()
{
  cout << "Created $1 default" << endl;
}


Cube::Cube(double length)
{
  cout << "Created $" << getVolume(3) << endl;
}

Cube::Cube(const Cube &obj)
{
  cout << "Created $" << getVolume(3) << " via copy" << endl;
}

Cube::~Cube()
{
  cout << "Destroyed $" << getVolume(5) << endl;
}

Cube& Cube::operator=(const Cube &obj)
{
  cout << "Transformed $" << getVolume(10) << "-> $" << &obj.getVolume(9) << endl;
}
