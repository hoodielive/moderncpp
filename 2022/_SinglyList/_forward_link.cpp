#include <iostream>

struct Element
{
  // Each element has a pointer to the next element in the linked list.
  // which initializes to nullptr.

  Element *next{};

  // Insert sets the next member of new_element to the next of this.
  void insert_after(Element *new_element)
  {
    // Then set next to new element.

    new_element->next = next;
    next = new_element;
  }

  char prefix[2];
  short operating_number;
};

int main()
{
  Element trooper1, trooper2, trooper3;

  // Trooper 1
  trooper1.prefix[0] = 'T';
  trooper1.prefix[1] = 'K';
  trooper1.operating_number = 421;
  trooper1.insert_after(&trooper2);

  trooper2.prefix[0] = 'F';
  trooper2.prefix[1] = 'N';
  trooper2.operating_number = 2187;
  trooper2.insert_after(&trooper3);

  trooper3.prefix[0] = 'F';
  trooper3.prefix[1] = 'N';
  trooper3.operating_number = 005;

  for (Element *cursor = &trooper1; cursor; cursor = cursor->next)
  {
    printf("Stormtrooper %c%c-%d\n",
      cursor->prefix[0],
      cursor->prefix[1],
      cursor->operating_number
   );
  }
}
