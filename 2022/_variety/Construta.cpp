#include <iostream>

using namespace std;

class Ori
{
  private:
    int x, y;

  public:
    Ori(int xx, int yy) : x { xx }, y { yy } {}
};

int main(int argc, char *argv[])
{
  Ori o{1, 2};

  cout << o.x << endl; 
  return 0;
}
