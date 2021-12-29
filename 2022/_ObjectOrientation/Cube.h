#pragma once

namespace egun 
{
  class Cube
  {
    public:
      Cube() noexcept;
      Cube(const Cube& obj) noexcept;

      double getVolume(double num);
      double getSurfaceArea(double surface);
      void setLength(double length);

    private:
      double length_;
  };
}
