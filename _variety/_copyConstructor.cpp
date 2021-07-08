#include <iostream>
#include <string>

using namespace std;

class Wine
{
  public:
    Wine();
    Wine(string c1, string c2);

    Wine& operator=(const Wine& rhs);

  private:
    string cofu1, cofu2;
};

Wine::Wine() {};
Wine::Wine(string c1, string c2): cofu1(c1), cofu2(c2) 
{
  this->cofu1 = c1;
  this->cofu2 = c2;
}

Wine& Wine::operator=(const Wine& rhs)
{
  return *this;
}

int main()
{
  &Wine preacher = "a glorious string";
  &Wine preachess = preacher;
}
