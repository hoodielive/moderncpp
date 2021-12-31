#include <iostream>

template<typename T>
T max(T a, T b)
{
  if (a < b) { return a; }
  return b;
}


int main(int argc, char *argv[])
{
  max(4, 7);

  return 0;
}
