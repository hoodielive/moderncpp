#include <print>
#include <initializer_list>

using namespace std;

void func(int const a, int const b, int const c)
{
  print("{}. {}. {}.", a, b, c);
}

void func(std::initializer_list<int> const list) 
{
  for (auto const& e : list)
  {
    print("{} \n", e);
  }
}

int main()
{
  func({ 1, 2, 3 });
}
