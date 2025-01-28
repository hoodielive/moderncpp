#include <print>
#include <vector>

using namespace std;

using byte        = unsigned char;
using byte_ptr    = unsigned char *;
using array_t     = int[10];
using fn          = void(byte, double);
using vec_t       = std::vector<T, custom_allocator<T>>;

template <class T>
class custom_allocator { /*...*/ };

template <typename T>

void func(byte b, double d) { /*... */ }

int main()
{
  byte b{ 42 };
  byte_ptr pb = new byte[10] {0};
  array_t a{ 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };

  vec_t<int> vi;
  vec_t<std::string> vs;
  
  fn* f = func;
  
}
