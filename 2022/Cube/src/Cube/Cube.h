#pragma once 

// only compile once
using namespace uuic
{
  class Cube
  {
    // API

    public:
      double getVolume();
      double getSurfaceArea();
      void setLength(double length);

    // Only class has access to length_.

    private:
      double length_;
  };
}


