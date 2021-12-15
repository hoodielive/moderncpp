#include <iostream>
#include <string>

using namespace std;

int main()
{
  string x;
  std::cout << "Please enter your name: "; 

  std::getline(std::cin, x);

  std::cout << "This is what you entered: " << x << std::endl;
  return 0;
}
