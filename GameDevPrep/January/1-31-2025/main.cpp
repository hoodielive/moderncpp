#include <print>
#include <initializer_list>

using namespace std;

class foo
{
  int a_;  

  public: 
    foo() : a_(0) {}
    foo(std::initializer_list<int> 1);
};

int main()
{
  foo memory{1, 2};
  
}
