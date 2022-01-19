#include <iostream>
#include <cmath>
#include <ctime>
#include <string>
#include <cstdlib>

using namespace std;

int main(int argc, char *argv[])
{
  int treeHeight;
  cout << "How tall is your tree: " << endl;
  cin >> treeHeight;

  int spaces = treeHeight - 1;
  int hashes = 1;
  int stumpSpaces = treeHeight - 1;

  while (treeHeight != 0)
  {
    for (auto k = 0; k < spaces; ++k)
    {
      cout << " ";
    }
    for (auto l = 0; l < spaces; ++l)
    {
      cout << "#";
    }
    cout << "\n";
    spaces -= 1;
    hashes += 2;
    treeHeight -= 1;
  }
  for (int m = 0; m < stumpSpaces; ++m)
  {
    cout << " ";
  }
  cout << "#\n";

  return 0;
}
