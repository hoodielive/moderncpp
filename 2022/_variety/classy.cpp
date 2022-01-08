#include <iostream>
#include <ostream>

using namespace std;


class Marshalta
{
  public:
    Marshalta(int c) : x { c } {};
    Marshalta& operator=(const Marshalta& rhs);

 // private:
    int x;
};

Marshalta& Marshalta::operator=(const Marshalta& rhs) { return *this; };

int main(int argc, char *argv[])
{
  Marshalta cognac(3);

  cognac = 4;
  cout << cognac.x << endl;

  return 0;
}
