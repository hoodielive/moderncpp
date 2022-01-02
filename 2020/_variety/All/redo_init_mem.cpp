#include <iostream> 

using namespace std;


class IAmAClass
{
  public:

    int x, y;

    // Member Initializer

    IAmAClass(int xx, int yy) : x{ xx }, y { yy } {};
};

int main()
{
  IAmAClass o{1, 2};
  std::cout << o.x << ' ' << o.y;

}
