#include <iostream>
using namespace std;

struct Element
{
  Element* next{};
  void insert_after(Element* new_element)
  {
    // Each element has a pointer to the
    // next element in the link list, which
    // initializes a nullptr;

    new_element->next = next;
    this->next = new_element;

    // It is the insert_after function that that
    // we use to do the insertion.

  }
  char prefix[2];
  short operating_number;
};

int main(int argc, char *argv[])
{
  Element trooper1, trooper2, trooper3;

  trooper1.prefix[0] = 'T';
  trooper1.prefix[1] = 'K';
  trooper1.operating_number = 421;

  trooper1.insert_after(&trooper2);

  trooper2.prefix[0] = 'F';
  trooper2.prefix[1] = 'N';
  trooper2.operating_number = 2187;

  trooper2.insert_after(&trooper3);

  trooper3.prefix[0] = 'L';
  trooper3.prefix[1] = 'S';
  trooper3.operating_number = 005;


  for (Element *cursor = &trooper1; cursor; cursor = cursor->next)
  {
    printf("stormtropper %c%c-%d\n",
           cursor->prefix[0],
           cursor->prefix[1],
           cursor->operating_number);
  }

  return 0;
}
