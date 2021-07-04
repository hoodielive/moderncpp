#include <iostream> 
#include <vector>

using namespace std; 

class Vec2D
{
  public:
    static const Vec2D Zero;

    Vec2D(): Vec2D(0, 0) {}
    Vec2D(float x, float y): mX(x), mY(y) {}

    inline void SetX(float x) { mX = x; }
    inline void SetY(float y) { mX = y; }
    inline float GetX() const { return mX; }
    inline float GetY() const { return mY;  }

    void Display() const
    {
      cout << "X: " << mX << " , Y: " << mY << endl;
    }

    friend ostream& operator<<(std::ostream & consoleOut, const Vec2D& vec);

  private:
    float mX, mY;
};

ostream& operator<<(std::ostream & consoleOut, const Vec2D& vec)
{
   consoleOut << "X: " << vec.mX << " , Y: " << vec.mY; 
   return consoleOut;
}

const Vec2D Vec2D::Zero;

int main(int argc, const char* argv[])
{
  Vec2D aVec(40, 22);
  cout << aVec << endl; // Insertion Operator.
  return 0;
}
