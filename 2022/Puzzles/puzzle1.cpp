#include <iostream>
#include <ostream>
#include <string>
#include <tuple>

using namespace std;

/* TODO: This code is Broken. */
/* How to return multiple values from a function.*/

std::tuple<char, char> combo(char letter1, char letter2);


int main()
{
  // psul

  return 0;
}


std::tuple<char, char> combo(char letter1, char letter2)
{

  return std::make_tuple(letter1, letter2);
}

