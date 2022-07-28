#include <iostream>
#include <string>

using namespace std;

class String 
{
  public:
    explicit String(int n);
    String(const char* p);
    void Display();
    
  private:
    string mStr;
};

String::String(int n)
{
  for (int i = 0; i < n; ++i)
  {
    mStr += '0';
  }
};

String::String(const char* p): mStr(p) {};

void String::Display()
{
  cout << mStr << endl;
}

int main(int argc, char* argv[])
{
  // This is a implicit conversion.
  // This will return a lot of zeros unless you configure it explicitly.
  // String myString = 'x';

  String myString = String(10);
  myString.Display();

  return 0;
}
