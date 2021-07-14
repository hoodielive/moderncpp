#include <iostream>
#include <string>

using namespace std;

int main()
{
  string s = "Orunmilla";
  string t = "Ifa";

  string a = s += " " + t;

  cout << "It is called: " << a << "\n";

  char a1 = a.at(6);

  cout << "The value of a1 is: " << a1 << endl;

  string s1 = "Howdy";

  if (s1 == "Hello")
    cout << "The string is equal to \"Hello\"";
  else
    cout << "Leave me alone." << "\n";

  // std::getline allows you to have white spaces.
  // If you use std::cin only, it would only accept part of the string.
  // std::getline(read_from, into);
  
  string consc = "Consciousness";
 
  // A string has a member function.
  // c_str() which returns a pointer to its first element.
  // It is also said it returns a pointer to a null-terminated character array our string is made of.

  cout << consc.c_str();

  return 0;
}
