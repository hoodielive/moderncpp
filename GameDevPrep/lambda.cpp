#include <print>
#include <vector>
#include <algorithm>
#include <functional>

using namespace std;

void process(int a, int b, std::function<int(int, int)> operation) {
  print("Result: {}.\n", operation(a, b));
}

int main()
{
  // [capture(parameters) -> return_type { body }]
  auto add = [](int a, int b) { return a + b; }; 
  int result = add(5, 10);

  print("The sum of 5 and 10 is: {}. \n", result);

  vector<int> nums = { 4, 2, 8, 6 };
  sort(nums.begin(), nums.end(), [](int a, int b) { return a < b; });

  for (int num : nums)
  {
    print("{}", num);
  }
 
  process(5, 3, [](int a, int b) { return a + b; });
  process(5, 3, [](int a, int b) { return a - b; });
   
  return 0;
}
