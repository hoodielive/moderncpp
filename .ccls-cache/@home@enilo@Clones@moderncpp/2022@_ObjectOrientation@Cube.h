#pragma once

#include "Shape.h"
#include "HSLAPixel.h"

namespace egun 
{
  class Cube : public Shape
  {
    public:
      Cube(double width, cs225::HSLAPixel color) noexcept;
      Cube(const Cube& obj) noexcept;

      double getVolume(double num) const;
      double getSurfaceArea(double surface);
      void setLength(double length);


      Cube operator=(const Cube& obj);

    private:
      double length_;
      cs225::HSLAPixel color_;
  };
}
