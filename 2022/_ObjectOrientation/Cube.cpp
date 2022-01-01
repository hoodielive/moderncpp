#include "Cube.h"
#include <iostream>
using namespace std;

namespace egun
{
  Cube::Cube(double width, cs225::HSLAPixel color) noexcept : Shape(width)
  {
    length_ = 1;
    std::cout << "Default Constructor invoked!" << std::endl;
  }

  Cube::Cube(const Cube& obj) noexcept
  {
    length_ = obj.length_;
    std::cout << "Copy Constructor invoked!" << std::endl;
  }

  double Cube::getVolume(double num) const
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

  Cube Cube::operator=(const Cube& obj)
  {
    length_ = obj.length_;
    std::cout << "Assignment operator invoked!" << std::endl;
    return *this;
  }
}
