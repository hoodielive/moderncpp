#include <iostream>

using namespace std;

class Oturupon 
{
public:
  Oturupon(): Oturupon("") {}

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

class Ogunda
{
  public:
    Ogunda(): oGunA("Ogun"), oGunB("Onire") {}

  private:
    Oturupon oGunA;
    Oturupon oGunB;

};

class Osa
{
  public:
    Osa() {}
    Osa(int xx, int yy): x { xx }, y { yy } {}

  private:
    int x, y;

};

class Ogbe
{
  public:
    Ogbe(int ouronosA, int ouronosB): orun1 { ouronosA }, orun2 { ouronosB } {}

  private:
    int orun1, orun2;
};

class AgoCopyConstructor
{
  private: 
    int mX, mY; 

  public:
    AgoCopyConstructor(int xx, int yy) : mX { xx }, mY { yy } {}

    // User-defined copy constructor.
    AgoCopyConstructor(const AgoCopyConstructor& rhs) : mX { rhs.mX }, mY { rhs.mY } 
    {
      std::cout << "The User-defined copy constructor has now been invoked!" << std::endl;
    }
};

class ADeepCopy
{
    private:
        int x;
        int* p;

    public:
      ADeepCopy(int xx, int pp) : x { xx }, p { new int { pp } }
      {

      }

      ADeepCopy(const ADeepCopy& rhs ) : x { rhs.x }, p { new int { *rhs.p }}
};

int main(int argc, const char* argv[])
{

  AgoCopyConstructor o1{ 1, 2 };
  AgoCopyConstructor o2 = o1;
  Oturupon otura;

  return 0;
}
