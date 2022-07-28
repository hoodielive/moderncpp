#include <cstdio>
#include <iostream>
#include "JiveStruct.cpp"

using namespace std;

int main()
{
  int gettysburg{};

  printf("gettysburg: %d\n", gettysburg);

  int *gettsburg_address = &gettysburg;

  printf("&gettsburg: %p\n", gettsburg_address);

  (*gettsburg_address) = 17325;

  printf("&gettsburg: %d\n", (*gettsburg_address));

  ClockOfTheLongNow clock;
  ClockOfTheLongNow* clock_ptr = &clock;

  printf("The year from struct is: %d\n", clock_ptr->set_year(2020));

  // Another way to write it.
  printf("The year from struct is: %d\n", (*clock_ptr).set_year(2020));

  int key_to_the_universe[]{ 3, 6, 9 };

  int* key_ptr = key_to_the_universe;

  printf("The value it points to is: %d\n", key_ptr);
  return 0;
}
