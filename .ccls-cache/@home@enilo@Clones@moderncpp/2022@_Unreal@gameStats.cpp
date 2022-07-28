#include <iostream>
using namespace std;

struct Vector2D
{
  float x;
  float y;
};

struct PlayerStats
{
  // It is convention to prefix the field with 'm' to suggest
  // that it is a member variable.

  int mHealth;
  int armor;
  int mana;
  int weaponDamage;
  int xp;
  int level;
  Vector2D location;
} player1;

struct AIStats
{
  int health;
  int weaponDamage;
  Vector2D location;

} rat{ 100, 25, {5, 999} }, alien{ 100, 50, { 4, 9 } };


int main()
{
  cout << "Rat Location x = " << rat.location.x << endl;
  cout << "Rat Location y = " << rat.location.y << endl;

  cout << "Alien Location x = " << alien.location.x << endl;
  cout << "Alien Location y = " << alien.location.y << endl;

  return 0;
}
