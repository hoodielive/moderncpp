#include <iostream>
#include <string>

using namespace std;

int main()
{
  string name;

  std::cout << "Give me your first and lastname: ";
  std::getline (std::cin, name);

  cout << "You entered the name -> " << name << std::endl;

} 
