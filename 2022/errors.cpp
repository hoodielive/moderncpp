#include <iostream>
#include <string>

int main(int argc, char *argv[])
{
  std::cerr << "Error message: Something went wrong" << std::endl;
  std::clog << "Log message: Something happened" << std::endl;

  // Data 
  int age; 
  std::string name; 
  std::cout << "Yo, what is your name and age: " << std::endl;
  std::cin >> name >> age; 
  std::cout << "So your name is: " << 
    name << " and your age is: " <<
    age << 
    " ?" << 
    std::endl;
  return 0;
}
