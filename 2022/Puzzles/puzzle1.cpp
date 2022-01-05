#include <iostream>
#include <ostream>
#include <string>
#include <tuple>

using namespace std;


// How to return multiple values from a function.

std::tuple<char, char> combo(char letter1, char letter2);


int main()
{
  char partnerA[256];
  char partnerB[256];

  auto [partnerA, partnerB] = combo('p', 's');
  combo('u', 'l');

}


std::tuple<char, char> combo(char letter1, char letter2)
{
  return std::make_tuple(letter1, letter2);
}

