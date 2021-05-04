#include <iostream>

class TheseGame
{
  public:
    int myFunction(int byValue)
    {
      std::cout << "Argument passed by value: " << byValue;
      return 0;
    }
};

int main()
{
  TheseGame thegame;

  std::cout << thegame.myFunction(565) << std::endl;
  return 0;
}
