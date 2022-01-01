
#include "List.h"

template<typename T>
const T &List<T>::operator[](unsigned index)
{
  // Start a thru pointer to advance through the list.
  ListNode *thru = head_;

  // Loop until the end or until a nullptr is found:
  while (index > 0 && thru->next != nullptr)
  {
    thru = thru->next;
    index--;
  }

  // Return the data:
  return thru->data;
}
