#include <iostream>

using namespace std;

struct A
{
  A() : A(0) {}
  A(int x) : mX(x) {}

  int mX;
};

class B
{
public:
  B(A &a);

  void Display()
  {
    cout << mARef.mX << endl;
  }

private:
  A &mARef;
};

int main()
{
}