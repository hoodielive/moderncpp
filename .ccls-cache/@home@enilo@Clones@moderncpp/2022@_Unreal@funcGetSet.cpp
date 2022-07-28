#include <cmath>
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
  int armor;
  Vector2D location;

  void setLocation(float p, float q)
  {
    location.x = p;
    location.y = q;
  }

  Vector2D getLocation()
  {
    return location;
  }

};


int main()
{
  PlayerStats player1;

  // x, y coordinate.
  player1.setLocation(5, 45);

  Vector2D vector = player1.getLocation();

  cout << player1.location.x << endl;
  cout << player1.location.y << endl;
  cout << vector.x << endl;
  cout << vector.y << endl;

  cout << player1.getLocation().x << endl;
  cout << player1.getLocation().y << endl;
  
  return 0;
}
