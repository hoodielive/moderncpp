#include <print>
#include <vector>

using namespace std;

using byte        = unsigned char;
using byte_ptr    = unsigned char *;
using array_t     = int[10];
using fn_ptr      = void(*)(byte, double);

template<typename T>
using vec_t       = std::vector<T, custom_allocator<T>>;

template <class T>
class custom_allocator 
{
  public:
    custom_allocator() noexcept {}
    
    template<class U>
    custom_allocator(const custom_allocator<U>&) noexcept {}

    T* allocate(size_t n)
    {
      return static_cast<T*>(::operator new(n* sizeof(T)));
    }

    void deallocate(T* p, size_t) noexcept
    {
      ::operator delete(p);
    }
};

template <typename T>

void func(byte b, double d) { /*... */ }

int main()
{
  byte b{ 42 };
  byte_ptr pb = new byte[10] {0};
  array_t a{ 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };

  vec_t<int> vi;
  vec_t<std::string> vs;
  
  fn_ptr = func;
  delete[] pb;
}
