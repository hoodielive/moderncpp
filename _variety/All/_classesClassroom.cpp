#include <iostream>

using namespace std;

class MyClass 
{
  public:
    int x;
    void doSomething();
    void printx()
    {
      std::cout << "The Value of a data memever x is: " << x << std::endl;
    }
};

void MyNewClass()
{
    std::cout << "This is the message, that I have for you" << std::endl;
}

void MyClass::doSomething()
{
  std::cout << "Hello World from a class.";
};

int main()
{
  MyClass o; // object
  o.x = 256;

  o.printx();
}
