#include <iostream> 
using namespace std;

class A
{
  private:
    float mVal;
    // Class B is my friend. Give her access to my private class stuff.
    friend class B;
};

class B
{
  public:
    B() {}
    void DoSomethingWithA(A& a)
    {
      a.mVal = 5;
      cout << a.mVal << endl;
    }
};

int main(int argc, const char * argv[])
{
  A a;
  B b;
  b.DoSomethingWithA(a);
  return 0;
}
