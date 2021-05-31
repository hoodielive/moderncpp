#include <iostream>
using namespace std;

/*
  Create a program called guesser. 
  There will be a secret number that is set at the start of the program without the user's input.
  The secret number should be picked from a certain range.
  The range of the number should be output to the player.
  The player should be prompted to enter his guess.
  The prompt should show how many guesses the player has left.
  The player will then enter his guess. If the guess is too high then the game will output that the guess was too high.
  If the guess was too low then the game will output that it was too low.
  The player only has a certain number of guesses.
  The number of guesses should be based on the range of the secret number.
  Any wrong guess will decrement the number of guesses left.
  The game ends by saying what the secret numnber was regardless of if the player guessed it right or not.
  When the game is over, the player should be prompted if he would like to play again.
  If yes then the secret number should change.
  Any input errors by the player should have proper handling.
*/

int main()
{
  /* 
    We need a variable that stores the secret number.
    Range: 0 -100
    We need a variable that stores the number of guesses the player has left.
    We need a variable that will store the player's guess.
    Number of guesses will be the log base 2 of the upper range - e.g. log2(100) ~ 7
    How do we change then secret number?
  */
}