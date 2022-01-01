#include <iostream>
#include "Cube.cpp"
#include <vector>

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

  // Vector Magic.

  std::vector<Cube> cubes2{ Cube(11), Cube(42), Cube(400) };

  // First examine capacity:

  // So first tell me how much data can I store in my vector.
  cout << "Initial capacity: " << cubes2.capacity() << endl;

  // So I expect the size to be 3 and then afterwards it should be 4.
  cubes2.push_back( Cube(800) );

  cout << "Size after adding: " << cubes2.size() << endl;
  cout << "Capacity after adding: " << cubes2.capacity() << endl;

  // Using pointer arithmetic, ask the computer to calculate
  // the offset from the beginning of the array to [2]:
  offset = (long)&(cubes2[2]) - (long)&(cubes2[0]);
  cout << offset << endl;

  Cube target = Cube(400);
  for (unsigned i = 0; i < cubes2.size(); i++)
  {
    if (target == cubes2[i])
    {
      cout << "Found target at [" << i << "]" << endl;
    }
  }

  return 0;
}
