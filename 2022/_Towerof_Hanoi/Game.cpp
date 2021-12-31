#include "Stack.h"
#include "Game.h"

Game::Game()
{
  // Create the 3 empty Stacks.

  for (int i = 0; i < 3; i++)
  {
    Stack stackOfCubes;
    stacks_.push_back( stackOfCubes );
  }


  // Create the 4 cubes, placing each on the [0]th stack:
  Cube blue(4, cs225::HSLAPixel::BLUE);
  stacks_[0].push_back(blue);

  Cube orange(3, cs225::HSLAPixel::ORANGE);
  stacks_[0].push_back(orange);

  Cube purple(2, cs225::HSLAPixel::PURPLE);
  stack_[0].push_back(purple);

  Cube yellow(1, cs225::HSLAPixel::YELLOW);
  stack_[0].push_back(yellow);

}
