#include <iostream>
using namespace std;

struct Vector2D 
{
  float x;
  float y;
};

struct PlayerStats
{
  int health;
  int something;
  Vector2D location;

  void setLocation(float a, float c)
  {
    location.x = a;
    location.y = c;
  }

  Vector2D getLocation()
  {
    return location;
  }
} player1, player2;

int main(int argc, char *argv[])
{
  PlayerStats players[2] { player1, player2 };

  players[0].setLocation(3, 4);
  players[1].setLocation(9, 7);

  cout << players[0].getLocation().x << endl;
  cout << players[0].getLocation().y << endl;
  cout << players[1].getLocation().x << endl;
  cout << players[1].getLocation().y << endl;
  return 0;
}
