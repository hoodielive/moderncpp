#include <iostream>
using namespace std;


int main(int argc, char *argv[])
{

  const int MAX = 10;

  int array2D[MAX][MAX];
  
  int (*pointer)[MAX] = array2D;

  for (int i = 0; i < MAX; i++)
  {
    for (int j = 0; j < MAX; i++)
    {
      pointer[i][j] = i * j;
      cout << "i = " << i << ", j = " << j << ", val" << pointer[i][j] << endl;
    }
  }
  
  return 0;
}
