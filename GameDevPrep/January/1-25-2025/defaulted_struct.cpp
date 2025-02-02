#include <print>
#include <vector>
#include <algorithm>

struct foo
{
  foo(foo const &) = delete;
};

void func(int) = delete;

class foo_not_copyable
{
  public:
    foo_not_copyable() = default;
    foo_not_copyable(foo_not_copyable const&) = delete;
    foo_not_copyable& operator=(foo_not_copyable const&) = delete;
};

class Data
{
  
};

class data_wrapper
{ 
  Data* data;
  
  public: 
    data_wrapper(Data* d = nullptr) : data(d) {}
    ~data_wrapper() { delete data; }
    

    data_wrapper(data_wrapper const&) = delete; 
    data_wrapper& operator=(data_wrapper const&) = delete;

    data_wrapper(data_wrapper&& other)
      : data(std::move(other.data))
    {
      other.data = nullptr; 
    }

    data_wrapper& operator=(data_wrapper&& other)
    {
      if (data != other.data)
      {
        delete data;
        data = std::move(other.data);
        other.data = nullptr;
      }
      return *this;
    } 
};

template<typename T>
void run(T val) = delete;
void run(long val) {}

int main()
{
  auto numbers = std::vector<int>{ 0, 2, -3, 5, -1, 6, 8, -4, 9 };
  
  auto positives = std::count_if(std::begin(numbers), std::end(numbers),
      [](int const n) { return n > 0; });
  
  auto ispositive = [](int const n) { return n > 0; };
  
//  auto positives = std::count_if(std::begin(numbers), std::end(numbers), ispositive);
}
