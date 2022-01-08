#include <iostream>
using namespace std;


class myClass
{
  public:
    int x;
};

int main(int argc, char *argv[])
{

  myClass o1;
  myClass o2 = std::move(o1);

  std::cout << "Move constructor invoked!" << endl;
  return 0;
}
