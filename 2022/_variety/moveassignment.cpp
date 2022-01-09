#include <iostream>

class myClass
{
  private:
    int x;
    std::string s;

  public:
    myClass(int xx, std::string ss) : x{ xx }, s{ ss } {};

    myClass& operator=(myClass&& otherObject)
    {
      x = std::move(otherObject.x);
      s = std::move(otherObject.s);
      return (*this);
    }
};

int main()
{
  myClass o1{ 123, "This is currently in object 1." };
  myClass o2{ 456, "This is currently in object 2." };
  o2 = std::move(o1);
  std::cout << "Move assignment operater used.";
}
