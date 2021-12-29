#include "Cues/Astor.h"
#include "Puzzle/puzzle.h"
#include <iostream>

void someOtherFunction();


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

    return 0;
  }
}

void someOtherFunction()
{
  std::cout << "Hello, from some other function." << "\n";
}
