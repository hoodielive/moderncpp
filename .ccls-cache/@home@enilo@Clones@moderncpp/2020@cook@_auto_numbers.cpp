#include <iostream> 
#include <vector> 

struct __lamdba_name__
{
  bool operator()(int const n) const { return n > 0; }
};

int main()
{
  auto numbers = std::vector<int>{ 0, 2, -3, 5, -1, 6, 8, -4, 9 };
  auto positives = std::__count_if( std::begin(numbers), std::end(numbers), [](int const n) { return n > 0; });
  
  auto ispositive = [](int const n) { return n > 0; };
  auto positive2 = std::__count_if(std::begin(numbers), std::end(numbers), ispositive);

  auto positives3 = std::__count_if(std::begin(numbers), std::end(numbers), [](auto const n) { return n > 0; });
}
