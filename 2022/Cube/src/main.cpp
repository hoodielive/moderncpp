#include "Cues/Astor.h"
#include <iostream>

namespace uuic {
  int main(int argc, char *argv[])
  {
    Astor c;

    c.setLength(3.48);
    double volume = c.getVolume();
    
    std::cout << "Volume: " << volume << std::endl;

    return 0;
  }
}
