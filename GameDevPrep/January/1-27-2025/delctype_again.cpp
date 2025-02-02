#include <print>

using namespace std;

class foo
{
  int x_;

  public:
    foo(int const x = 0) : x_{ x } {}
    int& get() { return x_; }
};

decltype(auto) proxy_get(foo& f)
{
  return f.get();  
}

struct 
{
  template<typename T, typename U>
  auto operator() (T const a, U const b) const { return a + b; }
} L;

int main()
{
  auto a = 42;
  int& ref = a;
  const auto const_val = 100;
 
  // Using decltype 
  decltype(auto) var1 = 10;
  decltype(ref) var2 = a;
  decltype(auto) var3 = 50;


  // Displaying types
  var1 = 20;
  var2 = 30;

  print("a: {} \n", a);
  print("var1: {} \n", var1);
  print("var2: {} \n", var2);
  print("var3: {} \n", var3);

  
  auto f = foo { 4200 };
  auto& x = proxy_get(f);

  print("{}", x);

  auto ladd = [](auto const a, auto const b) { return a + b; }
  
  return 0;
}
