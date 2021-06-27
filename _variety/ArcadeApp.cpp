#include <iostream>

using namespace std;

class Point2D
{
public:
  Point2D();
  Point2D(int x, int y);
  void SetX(int x);
  void SetY(int y);
  void GetX();
  void GetY();
  void Display();

  Point2D &RefOurselves();
  Point2D *PointerOurselves();

private:
  void MyPrivateMethod();
  int mX;
  int mY;
};

// Initializer Lists and Parameterized Constructors.
Point2D::Point2D() : Point2D(0, 0) {}
Point2D::Point2D(int x, int y) : mX(x), mY(y)
{
  this->Display();
  this->mX = 0;
}

Point2D &Point2D::RefOurselves()
{
  return *this;
}

Point2D *Point2D::PointerOurselves()
{
  return this;
}

void Point2D::SetX(int x) // :: Scope resolution operator.
{
  mX = x;
};

void Point2D::SetY(int y) // :: Scope resolution operator.
{
  mY = y;
};

void Point2D::Display()
{
  cout << "X: " << mX << ", Y: " << mY << endl;
};

struct SPoint2D
{
  void SetX(int x);
  void SetY(int y);
  void GetX();
  void GetY();
};

int main()
{
  Point2D point;

  Point2D &refPoint = point.RefOurselves();
  Point2D *ptrPoint = point.PointerOurselves();

  refPoint.Display();
  ptrPoint->Display();

  cout << "Points address: " << &point
       << " refPoint is referencing: "
       << &refPoint
       << "ptrPoint is pointing to: "
       << ptrPoint << endl;

  return 0;
}
