#include <iostream>
#include <vector>

int main()
{
  const int max_n = 300;
  float numbers[max_n];

  std::vector<float> number;

  if (number.size() < 310)
  {
    number.resize(400);
  }

  std::cout << numbers << std::endl;
}
