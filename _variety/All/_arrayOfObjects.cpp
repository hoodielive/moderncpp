#include <iostream>
#include <vector>

using namespace std; 

class B 
{
  public:
    B (int value): mValue (value) {}
    int Value() { return mValue; }

  private:
    int mValue; 
};

int main(int argc, const char * argv[])
{
  // B myBS[5];
  vector<B> myBVec;

  return 0;
}
