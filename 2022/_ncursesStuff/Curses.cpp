#include <iostream>
#include <ncurses.h>
using namespace std;


int main(int argc, char *argv[])
{
  initscr();

  printw("Howdy!");

  refresh();

  // Pause. Get Character.
  getch();

  endwin();
  return 0;
}
