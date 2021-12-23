#include <iostream> 
#include <string>

int main(int argc, char **argv)
{
  std::string response;
  std::cout << "Say Suga.." << std::endl;
  std::getline(std::cin, response);

  std::cout << "Thank you for saying: "  << response << std::endl;

}
