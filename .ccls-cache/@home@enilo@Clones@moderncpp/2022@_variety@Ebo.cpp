#include <iostream>
#include <string>
#include <cstdio>

using namespace std;


struct Ebo
{
  Ebo* next{};
  void insert_after(Ebo* next_element)
  {
    next_element->next = next;
    this->next = next_element;
  }

  char prefix[25];
  short operating_system;
};

int main()
{
  Ebo ogun, ochoosi, esu;

  ogun.prefix[0] = 'c';
  ogun.prefix[1] = 'o';
  ogun.prefix[2] = 'r';
  ogun.prefix[3] = 'n';
  ogun.operating_system = 45;
  ogun.insert_after(&ochoosi);

  ochoosi.prefix[0] = 'c';
  ochoosi.prefix[1] = 'o';
  ochoosi.prefix[2] = 'r';
  ochoosi.prefix[3] = 'n';
  ochoosi.operating_system = 5;
  ochoosi.insert_after(&esu);

  esu.prefix[0] = 'p';
  esu.prefix[1] = 'o';
  esu.prefix[2] = 'p';
  esu.prefix[3] = 'c';
  esu.prefix[4] = 'o';
  esu.prefix[5] = 'r';
  esu.prefix[6] = 'n';
  esu.operating_system = 369;

  for (Ebo *cursor = &ogun; cursor; cursor = cursor->next)
  {
    printf("The ebo for: %c%c-%d\n", 
            cursor->prefix[0],
            cursor->prefix[1],
            cursor->operating_system);
  }

  return 0;
}
