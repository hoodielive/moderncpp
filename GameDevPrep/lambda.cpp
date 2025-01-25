#include <print>

using namespace std;

// [capture(parameters) -> return_type { body }]

int main()
{
  auto add = [](int a, int b) { return a + b; }; 
  int result = add(5, 10);

  print("The sum of 5 and 10 is: {}. \n", result);

  return 0;
}
