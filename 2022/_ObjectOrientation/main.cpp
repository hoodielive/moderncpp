#include "Cube.h"
#include <iostream>

namespace egun
{
  int main()
  {
    // Create a Cube on stack memory.
    egun::Cube c;

    std::cout << "Volume: " << c.getVolume() << std::endl;

    return 0;
  }
}

