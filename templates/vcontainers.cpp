#include <iostream> 
#include <vector>

int main()
{
  const int max_n = 300;
  float numbers[max_n];

  vector<float> numbers; 

  if (numbers.size() < 310)
  {
    numbers.resize(400);
  }

  std::cout << numbers << std::endl; 
}
