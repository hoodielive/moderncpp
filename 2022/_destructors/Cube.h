#include <iostream>


class Cube
{
  public:
    Cube();

    Cube(double length);

    Cube(const Cube &obj);

    ~Cube();

    Cube operator=(const Cube& obj);

    double getVolume(double vol);

  private:
    double integer_; 
};
