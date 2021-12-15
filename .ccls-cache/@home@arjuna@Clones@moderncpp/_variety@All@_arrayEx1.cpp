#include <iostream>
#include <array>

using namespace std;

int main()
{

  double TheArray[5]{};
  TheArray[0] = 434;
  TheArray[4] = 999;

  std::cout << "An assignment to show elements in: " << TheArray[0] << std::endl;
  std::cout << "An assignment to show elements in: " << TheArray[1] << std::endl;
  std::cout << "An assignment to show elements in: " << TheArray[4] << std::endl;

  return 0;
}
