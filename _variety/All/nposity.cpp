#include <iostream>
#include <string>
#include <cstring>

using namespace std;

int main()
{
  string s = "This is a hello world string.";
  string stringtofind = "HELLO";
  string::size_type found = s.find(stringtofind);

  if (found != std::string::npos)
  {
    std::cout << "Substring found at position: " << found;
  }
  else
  {
    std::cout << "The substring is not found.";
  }
}
