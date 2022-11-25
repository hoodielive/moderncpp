#include <iostream>

using namespace std;

int main(int argc, char **argv) 
{
  int array[] = { 1, 2, 3, 4, 5 };

//  int i = 0;

  // for (i = 0; i < sizeof(array) / sizeof(int); i++)
  // {
  //   cout << array[i]  << endl;
  // }

  for (auto arr: array)
  {
    cout << arr << endl;
  }

  int array_copy[]{};

  for (int i=0; i < std::size(array); i++)
  {
    array_copy[i] = array[i];
    cout << array_copy[i] << endl;
  }
  
  return 0;
}
