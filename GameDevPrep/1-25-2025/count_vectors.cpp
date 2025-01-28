#include <print>
#include <vector>
#include <algorithm>

using namespace std;
  

int main()
{
  auto numbers = vector<int>{ 4, 7, 3, -1, 5, -9, 2 };

  auto positives = std::count_if(std::begin(numbers), std::end(numbers)
      [](int const n) { return n > 0; });
}
