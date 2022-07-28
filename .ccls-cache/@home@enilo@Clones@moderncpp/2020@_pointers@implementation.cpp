#include <iostream>
#include <cstdio>

/*
 * Objects reside in memory.
 * A way to access objects in memory is through pointers.
 * Each object in memory has a 'type' AND an 'address'.
 * This allows us to access the object 'through' the pointer.
 * Pointers are 'types' that can hold the address of a particular object.
 */


int main()
{
  /* 
   * p is of type 'int'. To make it point to an 'existing' int object in memory, we use
   * The address-of operator (&).
  */

  int x = 123; 


  // We say that p points to x.

  int* p = &x;
  
  // To declare a pointer that points a char (object), we declare a pointer of type char*.

  char* f; 

  printf("This is the address %d", p);

}
