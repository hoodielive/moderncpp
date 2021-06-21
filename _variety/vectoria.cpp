#include <iostream>
#include <vector>

using namespace std;

class Vec2D
{
  public:
    static const Vec2D Zero;
    
    Vec2D(): Vec2D(0, 0){}
    Vec2D():(float x, float y): mX(x), mY(y){}

    inline void SetX(float x) { mX = x; }
    inline void SetY(float y) { mY = y; }
    inline float GetX() const { return mX; }
    inline float GetY() const { return mY; }

    void Display() const
    {
      std::cout << "X: " << mX << ", Y: " << mY << std::endl;
    }

    friend void operator<<(std::ostream & consoleOut, const Vec2D& vec);

  private:
    float mX, mY;
};

void operator<<(std::ostream & consoleOut, const Vec2D& vec)
{
  consoleOut << "X: " << mX << ", Y: " << mY << std::endl;
}

const Vec2D Vec2D::Zero;

int main(int argc, const char* argv[])
{
  Vec2D aVec(10, 5);
  cout << aVec;
  return 0;
}
