#include <iostream>
using namespace std;

class Point2D
{
  public:
    Point2D();
    Point2D(int x, int y);

    // Setters.
    void SetX(int x);
    void SetY(int y);

    // Getters.
    int GetX();
    int GetY();

    // Memory Management.
    Point2D& RefYourself();
    Point2D* PointerToSelf();

    // Functions.
    void Display();

private:
    int mX; 
    int mY;
};

Point2D::Point2D(): Point2D(0, 0) {}
Point2D::Point2D(int x, int y): mX (x), mY(y)
{
  this->Display();
  this->mX = 0;
  this->mY = 0;
};

Point2D& Point2D::RefYourself() { return *this; }
Point2D* Point2D::PointerToSelf() { return this; }

void Point2D::SetX(int x)
{
  mX = x;
};

void Point2D::SetY(int y)
{
  mY = y;
};

int Point2D::GetX()
{
  return mX;
}

int Point2D::GetY()
{
  return mY;
}

void Point2D::Display()
{
  cout << "mX is: " << mX << " and mY is: " << mY << endl;
};

int main()
{
  Point2D point = Point2D(4, 5);
  Point2D& refPoint = point.RefYourself();
  Point2D* ptrPoint = point.PointerToSelf();

  refPoint.Display();
  ptrPoint->Display();

  cout << "Point's address: " << &point << " refPoint is referencing: " << &refPoint << " ptrPoint is pointing to: " << ptrPoint << endl;
  return 0;
}
