#include <iostream>

using namespace std;

class Oturupon 
{
public:
  Oturupon(): Oturupon(""){}

  Oturupon(const std::string& strVal): mStrVal(strVal){}

  ~Oturupon()
  {
    std::cout << "Destroying: " << mStrVal << std::endl;
  }

private:
  string mStrVal;
};

class Ose
{
  public:
    Ose(): mA1("A1"), mA2("A2") {}
  private:
    Oturupon mA1;
    Oturupon mA2;

};

int main(int argc, const char* argv[])
{

  Oturupon otura;

  return 0;
}
