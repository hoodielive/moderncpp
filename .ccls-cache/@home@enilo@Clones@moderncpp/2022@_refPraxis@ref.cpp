#include <iostream>
#include <string>

using namespace std;

void returnString(string& myStr);

int main(int argc, char *argv[])
{
  string myStr = "Druid";
  returnString(myStr);

  cout << myStr << "\n";

  return 0;
}

void returnString(string& str)
{
    str += "!";
}
