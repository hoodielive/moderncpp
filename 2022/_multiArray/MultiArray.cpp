#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
  const int MAX = 10;
  int max = 10;

  int array2D[MAX][MAX];

  // This is how you create a pointer to a 2D array.
  int (*pointer)[MAX] = array2D;

  int** pointer2 = new int *[MAX];

  // First Dimension.
  for (int r = 0; r < MAX; r++)
  {
    // Second Dimension.
    for (int c = 0; c < MAX; c++)
    {
      // Execute.

      pointer[r][c] = r * c; cout << "r = " << r << ", c = " 
        << c << ", val = " << pointer[r][c] << endl;
    }
  }

  /* Another way to do this is.. */
  int (*aptr)[MAX] = new int[MAX][MAX];

  // First Dimension.
  for (int j = 0; j < MAX; j++)
  {
    // Second Dimension.
    for (int k = 0; k < MAX; k++)
    {
      // Execute.

      aptr[j][k] = j * k; cout << "j = " << j << ", k = " 
        << k << ", val = " << pointer[j][k] << endl;
    }
  }

  delete[] aptr;
  aptr = nullptr;

  // Another way.
  int** _pointer = new int *[MAX];

  for (int p = 0; p < MAX; p++)
  {
    // So each of these pointers will be assigned pointers with
    // MAX array capacity.

    _pointer[p] = new int[MAX];
  }

  delete[] _pointer;
  _pointer = nullptr;

  return 0;
}
