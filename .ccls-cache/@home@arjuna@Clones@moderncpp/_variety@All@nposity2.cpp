#include <iostream>
#include <string>

using namespace std;

int main()
{
  string s = "This is the weirdest language.";
  string stringtofind = "weirdest";
  string::size_type found = s.find(stringtofind);

  if (found != std::string::npos)
  {
    std::cout << "I have located the substring at position: " << std::endl;
  }
  else
  {
    std::cout << "I couldn't find the substring." << "\n";
  }
}
