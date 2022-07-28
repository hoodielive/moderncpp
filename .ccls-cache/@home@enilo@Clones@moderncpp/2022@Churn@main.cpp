#include <iostream>
using namespace std;

class Player
{
  public:
    int speed = 4;
  
    void Move(int xa, int xb)
    {
      xa += xa * speed;
      xb += xb * speed;
      cout << xa << " and " << xb << "\n";
    }
};


int main()
{
  Player player;

  player.Move(4, 9);

  return 0;

}
