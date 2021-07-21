#include <iostream>

class foo_not_copyable
{
  public:
    foo_not_copyable() = default;

    foo_not_copyable(foo_not_copyable const&) = delete;
    foo_not_copyable& operator=(foo_not_copyable const&) = delete;
};

class Foo
{
  public:
    Foo() = default;
    inline Foo& operator=(Foo const &);
};

inline Foo& Foo::operator=(Foo const &) = default;
class Data
{
  
};

class data_wrapper
{
  Data* data;
  public:
    data_wrapper(Data* d=nullptr) : data(d) {}
    ~data_wrapper() { delete data; }

    data_wrapper(data_wrapper const&) = delete;
    data_wrapper& operator=(data_wrapper const&) const = delete;
    data_wrapper(data_wrapper&& other) :data(std::move(other.data))
    {
      other.data = nullptr;
    }

    data_wrapper& operator=(data_wrapper&& other)
    {
      if (this != std::addressof(other))
      {
        delete data;
        data = std::move(other.data);
        other.data = nullptr;
      }
      return *this;
    };
};

template <typename T>
void run(T val) = delete;
void run(long val) {}

struct foo
{
  foo() = default;
};

int main()
{
  
}
