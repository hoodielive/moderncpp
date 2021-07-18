#include <iostream>
#include <string>

using namespace std;

int main()
{
  string s = "Hello C++ World";

  char found = s.find("C");

  if (found != std::string::npos)
  {
    cout << "Found it!";
  }
  else
  {
    cout << "Didn't find it.";
  }


  int x = 0;

  do
  {
    std::cout << "The value of x is: " << x << endl;
    x++;
  } while (x < 10);
};
