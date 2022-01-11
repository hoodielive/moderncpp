#include <iostream>
using namespace std;

struct GameStats
{
  int currentLevel;
  int gameScores[10];

};

int main()
{
  GameStats game;
  game.gameScores[0] = 3;

  cout << game.gameScores[0] << endl;

  return 0;
}
