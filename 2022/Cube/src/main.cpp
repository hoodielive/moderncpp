#include "Cues/Astor.h"
#include "Puzzle/puzzle.h"
#include <iostream>

double someOtherFunction();


namespace uuic {
  int main(int argc, char *argv[])
  {
    Astor c;

    c.setLength(3.48);
    double volume = c.getVolume();
    
    std::cout << "Volume: " << volume << std::endl;


    Astor *kofou = CreateUnitCube();

    someOtherFunction();

    double a = kofou->getSurfaceArea();
    double b = kofou->getVolume();
    
    std::cout << "Surface Area: " << a << std::endl;
    std::cout << "Volume: " << b << std::endl;

    return 0;
  }

  double someOtherFunction()
  {
    Astor cubes[100];
    double totalVolume = 0;

    for (int i = 0; i < 100; i++)
    {
      cubes[i].setLength(i);
      totalVolume += cubes[i].getVolume();
    }

    return totalVolume;
  }
}

