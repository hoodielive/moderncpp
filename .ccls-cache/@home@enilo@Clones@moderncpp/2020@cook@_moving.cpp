#include <iostream> 
#include <string> 

using namespace std; 

inline void f(std::string s) { std::cout << "Moved or copied: "  << s << '\n'; }
inline void g(std::string&& s) { std::cout << "Moved  "  << s << '\n'; }

std::string h() 
{ 
  std::cout << s("test") << std::endl ; 
  return s; 
}

int main() 
{
  std::string test("123");
  f(test);
  f(std::move(test));

  test = "456";
  g(std::move(test));
  g(std::string("789"));
  g(h());
}
