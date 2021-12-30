#include <iostream>
#include <vector>


int main(int argc, char *argv[])
{
  // In the Stdlib, a vector is an array of automatic size.
  // Lets make a vector of ints and loop over its contents.

  std::vector<int> int_list;
  int_list.push_back(1);
  int_list.push_back(2);
  int_list.push_back(3);

  // Automatically loop over each item::one at a time.
  for (int x : int_list)
  {
    x = 99;
  }

  for (int x: int_list)
  {
    std::cout << "This item has value: " << x << std::endl;
  }

  std::cout << "If that worked correctly, you never saw 99!" << std::endl;

  for (int &x : int_list)
  {
    x = 99;
  }
  
  for (int x: int_list)
  {
    std::cout << "This item has value: " << x << std::endl;
  }

  std::cout << "Everything was replaced with 99!" << std::endl;

  return 0;
}
