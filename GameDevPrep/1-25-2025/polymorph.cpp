#include <print>

using namespace std;

class Shape
{
  public: 
    Shape() {};
    virtual void display() const = 0; 
};

class Circle : public Shape
{
  public:
   void display() const override
    {
      print("Hello from the Derived class -> Circle.");
    }
};

int main()
{
  Shape* oneAccord = new Circle;
  
  oneAccord->display();

  delete oneAccord;
}
