#include <iostream>

using namespace std;

class Ori
{
  public:
    Ori(int xx, int yy) : x { xx }, y { yy } {}
    int x, y;

  private:

};

int main(int argc, char *argv[])
{
  Ori o{1, 2};
  cout << o.x << endl;

  return 0;
}
