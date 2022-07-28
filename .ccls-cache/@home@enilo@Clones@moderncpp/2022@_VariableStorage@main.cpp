#include "Cube.cpp"
#include <iostream>
using namespace egun;




int main(int argc, char *argv[])
{

  // 1,000-valued
  Cube c(10);
  // Transfer the Cube (copy constructor)

  Cube myCube = c;
  
  return 0;
}
