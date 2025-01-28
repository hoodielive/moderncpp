#include <print>

using namespace std;

typedef unsigned char btye;
typedef unsigned char * byte_ptr;
typedef int           array_t[10];
typedef void(*fn)(byte, double);

template<typename T>
class foo
{
  typedef T value_type;
};

typedef std::vector<int, int> vint_t;
typedef int INTEGER;


int main()
{
  INTEGER x = 10;
  INTEGER y = 20;

  print("x is {} and y is {}.\n", x, y);
}
