#include "Cube.h"
#include <iostream>
using namespace std;

namespace egun
{
  class Cube
  {
    public:
      double getVolume(double num)
      {
        return num;
      };

      double getSurface(double surface)
      {
        return surface;
      }

      void setLength(double length)
      {
        cout << length << endl;
      }

    private:
      double length_;
  };
}
