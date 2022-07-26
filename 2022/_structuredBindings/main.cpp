#include <iostream>
#include <string>
#include <tuple>

std::tuple<std::string, int> CreatePerson()
{
  return { "Enilo", 37 };
}

int main()
{
  auto person = CreatePerson();
  std::string& name = std::get<0>(person);
  int age = std::get<1>(person);
  std::tie(name, age) = CreatePerson();

  std::cout << person << std::endl;
}
