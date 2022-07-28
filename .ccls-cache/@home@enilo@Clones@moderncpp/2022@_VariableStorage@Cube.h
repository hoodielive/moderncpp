#pragma once

namespace egun 
{
  class Cube
  {
    public:
      Cube(double length);
      Cube(const Cube& obj);

      double getVolume(double num);
      double getSurfaceArea(double surface);
      void setLength(double length);

      Cube& operator=(const Cube& obj);
    private:
      double length_;
  };
}
