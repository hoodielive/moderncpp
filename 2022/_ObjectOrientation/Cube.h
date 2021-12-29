#pragma once

namespace egun 
{
  class Cube
  {
    public:
      Cube();

      double getVolume();
      double getSurfaceArea();
      void setLength(double length);

    private:
      double length_;
  };
}
