#include <iostream>
using namespace std;

class Ori
{
  public:
    Ori()
    {
      std::cout << "Default constructor invoked." << "\n";
    }

    Ori(double five)
    { 
      std::cout << "Custom constructor invoked." << "\n";
    }
};

int main()
{
  Ori o;
  Ori g(3);
}
