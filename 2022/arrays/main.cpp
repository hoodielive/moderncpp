#include <iostream>

using namespace std;

int main(int argc, char **argv) 
{
  int array[5] = { 1, 2, 3, 4, 5 };

  int i = 0;

  for (i = 0; i < sizeof(array) / sizeof(int); i++)
  {
    cout << array[i]  << endl;
  }

  return 0;
}
