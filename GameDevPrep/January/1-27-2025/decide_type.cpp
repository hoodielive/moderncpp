#include <print>

using namespace std;

class foo
{
   int _x;

   public:
      foo(int const x = 0) : _x{ x } {}
      int& get() { return _x; }
};

decltype(auto) proxy_get(foo& f)
{
   return f.get(); 
}

int main()
{
   auto f = foo { 42 } ;
   auto proxy_get(foo& f)
   print("{}", f);


} 
