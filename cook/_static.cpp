#include <iostream> 

using namespace std; 

class MyClass 
{
  public:
    static int x; // Declare a static data member. 
    static void myfunction();
};

int MyClass::x = 123; 

void myFunction()
{
  // static says the object will have a static storage duration.
  static int x = 0; 
  x++;
  std::cout << x << '\n';
};

void MyClass::myfunction()
{
  std::cout << "Hello, world from the static member function.";
}

int main()
{
  myFunction();
  myFunction();
  myFunction();

  MyClass::x = 456; // Access a static data member.
  MyClass::myfunction();
  std::cout << "Static data member value is: " << MyClass::x;
}


