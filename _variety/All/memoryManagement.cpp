#include <iostream> 
using namespace std;

class Memoria
{
  public:
    Memoria();
    Memoria(int x, int y);

    Memoria& refPoint(); 
    Memoria* ptrPoint();

  private:
    int mX;
    int mY;
};

Memoria::Memoria(): Memoria(0, 0) {}
Memoria::Memoria(int x, int y): mX(x), mY(y) 
{
  this->mX = 0;
  this->mY = 0;
};

Memoria& Memoria::refPoint() 
{ 
  return *this;
}

Memoria* Memoria::ptrPoint() 
{ 
  return this;
}

int main(int argc, const char* argv[])
{
  return 0;
}
