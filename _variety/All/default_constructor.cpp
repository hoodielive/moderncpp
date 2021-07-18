#include <iostream>

using namespace std;

class MyClass
{

  public: 
    int x, y;

    MyClass( int xx = 123, int yy = 456 )
    {
      x = xx;
      y = yy;

      std::cout << "I am a default constructor invoked." << "\n";
    }
};

int main()
{
  MyClass o;

  std::cout << "User-provided constructor invoked." << "\n";

  std::cout << o.x << ' ' << o.y;

};
