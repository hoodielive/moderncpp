#include <print>

using namespace std;

class Male
{
  public: 
    virtual void show() = 0; // Pure virtual function
    virtual ~Male() {} // virtual destructor to ensure proper cleanup
};

class Female : public Male
{
  public: 
    void show() override
    {
      print("Derived class implementation of show(). \n");
    }
};

int main()
{
  Female derivedObj;
  derivedObj.show();

  Male* abstractPtr = &derivedObj;
  abstractPtr->show();
  return 0;
}
