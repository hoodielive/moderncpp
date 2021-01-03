#include <iostream>
#include <optional>

namespace A::B
{
  class Blah
  {
    public:
      inline void Foo() { std::cout << "Inside of Blah::foo() \n"; }
  };
}
int main()
{
  int i = 4;
  int& x = i;
  std::cout << "The value of x is: " << &x << std::endl;

  return 0;
}
