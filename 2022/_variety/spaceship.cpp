#include <iostream>
#include <compare>

using namespace std;

struct num_value
{
  int num;
};

constexpr weak_ordering operator<=>(num_value lhs, num_value rhs)
{
  return lhs.num <=> rhs.num;
}

void compare_them(weak_ordering value)
{
  if(value == 0)
  {
    cout << "equal\n";
  }
  else if (value < 0)
  {
    cout << "less\n";
  }
  else if (value > 0)
  {
    cout << "greater\n";
  }
  else
  {
    cout << "Should not see this!";
  }
}

int main()
{
  num_value x{ 11 };
  num_value y{ 2 };
  compare_them(x <=> y);

  return 0;
}
