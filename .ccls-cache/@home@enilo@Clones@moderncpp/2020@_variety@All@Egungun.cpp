#include <iostream> 

using namespace std; 

class Egungun
{
  public:
    Egungun();
    Egungun(int x, int y);

    void SetX(int x);
    void SetY(int y); 
    int GetX();
    int GetY();
    
    int* refPointer;
    int& refReference();

    void Display();
//    ostream& consoleOut<<(const ostream& someOtherThing);

  private:
    int mX, mY;
};

Egungun::Egungun(): Egungun(0, 0) {};

Egungun::Egungun(int x, int y): mX(x), mY(y)
{
  this->mX = x;
  this->mY = y;
  this->Display();
};

void Egungun::SetX(int x)
{
  mX = x;
};

void Egungun::SetY(int y)
{
  mY = y;
};

int Egungun::GetY()
{
  return this->mY;
};

int Egungun::GetX()
{
  return this->mX;
};

void Egungun::Display()
{
  cout << "The value of mX is: " << mX << " and the value of mY is: " << mY << "\n";
}

int main(int argc, const char* argv[])
{
  Egungun artistEgun(4, 5);
  return 0; 
}
