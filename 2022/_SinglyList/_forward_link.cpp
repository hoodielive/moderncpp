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
