#include <iostream>

class Cube
{
  public:
    Cube();
    void setLength(double length);

  private:
    double length_;
};

void setLength(double length)
{
  double length_;
  length_ = length;
}

int main()
{
  int *p = new int;
  Cube *c = new Cube;
  *p = 42;

  (*c).setLength(4);

  delete c;
  delete p;
  
  return 0;
}
