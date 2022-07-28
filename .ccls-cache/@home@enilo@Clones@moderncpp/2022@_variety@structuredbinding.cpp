#include <iostream>

using namespace std;

class Create
{
  public:
    Create();

    Create ostream<<(const std::ostream& inst)
    {
      return inst;
    }
}

int main()
{
  std::pair<string, int> myPair { "hello", 55 };
  auto [ theString, theInt ] { myPair };

  cout << myPair << endl;
}
