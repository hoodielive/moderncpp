#include <iostream>
#include <string>

int main()
{
  std::string s = "Consciousness is the one and only reality.";
  std::cout << s.c_str() << std::endl;

  // Substringing

  std::string subs = s.substr(6, 5);
  std::cout << "The substr value is: " << subs;
  
}
