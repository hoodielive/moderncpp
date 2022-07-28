#include <iostream>

class Cube
{
  public:
    Cube() {};
    void setLength(double length){};

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
  Cube *c1 = new Cube;
  Cube *c2 = c1;
  *p = 42;

  c->setLength(4);
  c2->setLength(10);

  delete c;
  delete c2;
  delete c1;
  delete p;

  p = nullptr;
  c = nullptr;

  return 0;
}
