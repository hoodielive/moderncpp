#include "Cube.cpp"
#include <iostream>
using namespace egun;


void Foo(Cube cube)
{
  // Nothing.
}

Cube foo()
{
  Cube c;
  return c;
}

int main(int argc, char *argv[])
{
  Cube c;

  Cube myCube;
  myCube = c;
  Foo(c);

  std::cout << "Volume: " << c.getVolume(4) << std::endl;
  Cube c2 = foo();

  return 0;
}
