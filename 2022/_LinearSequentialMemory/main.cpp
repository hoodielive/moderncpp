#include <iostream>
#include "Cube.cpp"

using namespace std;


int main()
{
  // Create a fixed-size array of 10 primes:
  int values[10] { 2, 3, 5, 7, 11, 13, 15, 17, 21, 23 };

  // Create an array of 3 Cubes:
  Cube cubes[3] = { Cube(11), Cube(42), Cube(400) };
  
  // Print the size of each type `int`:
  cout << sizeof(int) << endl;
  cout << "The size of Cube is: " << sizeof(Cube) << endl;

  // Using pointer arithmetic, ask the computer to calculate
  // the offset from the beginning of the array to [2]:
  int offset = (long)&(values[2]) - (long)&(values[0]);
  cout << offset << endl;

  offset = (long)&(cubes[2]) - (long)&(cubes[0]);
  cout << offset << endl;
  return 0;
}
