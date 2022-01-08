#include <iostream>
#include <string>
using namespace std;

int main(int argc, char *argv[])
{
  std::string c = "Aeon 3";
  string stringtofind = "Aeon";
  string::size_type found = c.find(stringtofind);

  if (found != string::npos)
  {
    cout << "Substring found at position: " << found << endl;
  }
  else
  {
    cout << "The substring not found." << endl;
  }
  return 0;
}
