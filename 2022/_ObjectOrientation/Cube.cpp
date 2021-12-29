#include "Cube.h"
#include <iostream>
using namespace std;

namespace egun
{
  Cube::Cube() noexcept
  {
    length_ = 1;
  }

  Cube::Cube(const Cube& obj) noexcept
  {
    length_ = obj.length_;
  }

  double Cube::getVolume(double num)
  {
    return num;
  }

  double Cube::getSurfaceArea(double surface)
  {
    return surface;
  }

  void Cube::setLength(double length)
  {
    cout << length << endl;
  }
}
