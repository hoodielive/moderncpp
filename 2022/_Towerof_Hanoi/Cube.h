#include "HSLAPixel.h"

class Cube
{
  public:
    Cube(double length, cs225::HSLAPixel color);

    double getLength() const;

    void setLength(double length);

    double getVolume() const;

    double getSurfaceArea() const;

  private:
    double length_;
    cs225::HSLAPixel color_;
};
