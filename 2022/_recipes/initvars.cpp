#include <iostream>
#include <vector>

using namespace std;

class FriendlyFace
{
  private:
    int m_Member;

  public:
    FriendlyFace() = default;
    FriendlyFace(const FriendlyFace& rhs) = default;
};


int main()
{
  using myVector = vector<int>;

  myVector vecA( 1 );

  cout << vecA.size() << " " << vecA[0] << endl;

  myVector vecB( 1, 10 );
  cout << vecB.size() << " " << endl;

  FriendlyFace objA;
  // We employ the initializer here to support uniform
  // initialization.
  FriendlyFace objB(FriendlyFace{});

  int number { 0 };
  // We are adding a static_cast to inform the compiler
  // of the deliberated narrowing in conversion.
  char another { static_cast<char>(512) };
  double bigNumber { 1.0 };
  float littleNumber { static_cast<float>(bigNumber) };

  return 0;
}
