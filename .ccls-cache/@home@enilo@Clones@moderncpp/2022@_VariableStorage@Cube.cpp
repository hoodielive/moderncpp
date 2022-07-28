#include "Cube.h"
#include <iostream>
using namespace std;

namespace egun
{
  // 1 parameter constructor.
  Cube::Cube(double length)
  {
    length_ = length;
    std::cout << "Created $" << getVolume(1) << std::endl;
  }

  // Takes in a cube by reference &.
  Cube::Cube(const Cube& obj)
  {
    length_ = obj.length_;
    std::cout << "Created $" << getVolume(3) << " via copy" << std::endl;
  }

  Cube& Cube::operator=(const Cube& obj)
  {
    std::cout << "Transformed $" << getVolume(3) << "-> $" << obj.getVolume() << std::endl;

    length_ = obj.length_;

    return *this;
  }
}
