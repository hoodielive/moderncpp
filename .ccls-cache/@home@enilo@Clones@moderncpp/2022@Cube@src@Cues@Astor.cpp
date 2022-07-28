#include "Astor.h"


namespace uuic {

  double Astor::getVolume()
  {
    return length_ * length_ * length_;
  }


  double Astor::getSurfaceArea()
  {
    return 6 * length_ * length_;
  }

  void Astor::setLength(double length)
  {
    length_ = length;
  }
}
