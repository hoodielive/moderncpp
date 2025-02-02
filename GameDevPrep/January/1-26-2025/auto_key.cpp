#include <print>
#include <vector>
#include <map>
#include <string>

using namespace std;

// Automatic type deduction. 

class foo
{
  int x_;
  public: 
    foo(int const x = 0) : _x{ x } {}
    int& get() { return _x; }
};

auto proxy_get(foo& f) { return f.get(); }

int main()
{
  std::map<int, std::string>::const_iterator _map;  

  auto func1(int const i ) -> int
  {
    return 2 * i;
  }

auto f = foo{ 42 };
auto& x = proxy_get(f);
print("{}", x);
}

