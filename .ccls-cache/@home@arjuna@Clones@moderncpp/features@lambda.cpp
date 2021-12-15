#include <iostream>
#include <vector>

// Prerequisite.
auto v = std::vector{1, 3, 2, 5, 4};

// Look for number three.
auto three = 3;
auto num_threes = std::count(v.begin(), v.end(), three);

// Look for numbers which is larger than three.
auto is_above_3 = [](int v) { return v > 3; };
auto num_above_3 = std::count_if(v.begin(), v.end(), is_above_3);

int main()
{
  std::cout << num_above_3 << std::endl;
}
