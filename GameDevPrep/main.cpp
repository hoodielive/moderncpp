#include <print>

class Dikenga
{
  public: 
    Dikenga(); // constructor, initializes objects.
    ~Dikenga(); // destructor
};

using namespace std;
// User-defined function

int add(int a, int b)
{
  return a + b;
}


int main()
{ 
  std::print("{}", add(4, 5));
  Dikenga();
  return 0;
}
