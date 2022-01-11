#include <iostream>
using namespace std;


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
} player1;

struct AIStats
{
  int health;
  int weaponDamage;

}rat{ 100, 25 }, alien{100, 50};


int main(int argc, char *argv[])
{
  rat = alien;

  cout << rat.weaponDamage << endl;

  return 0;
}
