#include <iostream> 
using namespace std;

int StringLength(const char *aString);

int main(int argc, char *argv[])
{
  char aString[6] { 'h', 'e', 'l', 'l', 'o', '\0'};
  const char *anotherString = "hello";

  std::cout << aString << endl;
  std::cout << *anotherString << endl;

  const char cString[] { "Hello" };
  cout << "The length of " << cString << " is: " << StringLength(cString) << endl;

  return 0;
}

int StringLength(const char *aString)
{
  int length = 0;
  const char *p = aString;

  if(aString != nullptr)
  {
    while(*p != '\0')
    {
      length++;
      p++;
    }
  }
  return length;
}
