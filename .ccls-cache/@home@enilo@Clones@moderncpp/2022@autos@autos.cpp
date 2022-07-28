#include <iostream>
#include <vector>
#include <string>

int main(int argc, char *argv[])
{
  auto i = 42;
  auto d = 42.5;
  auto s = "text";
  auto v = { 1 , 2, 3 };


  std::cout << sizeof(i) << std::endl;
  std::cout << sizeof(d) << std::endl;
  std::cout << sizeof(s) << std::endl;
  std::cout << sizeof(v) << std::endl;

  auto b = new char[10] { 0 };
  auto s1 = std::string { "text" };
  auto v1 = std::vector<int> { 1, 2, 3 };
//  auto p = std::make_shared<int>(42);

  std::cout << sizeof(b) << std::endl;
  std::cout << sizeof(s1) << std::endl;
  std::cout << sizeof(v1) << std::endl;
  return 0;
}
