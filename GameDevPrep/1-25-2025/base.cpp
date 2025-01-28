#include <print>

using namespace std;

class Male
{
  public:
    virtual void show()
    {
      print("Male class \n");
    }

    virtual ~Male() {}
};

class Female : public Male
{
  public: 
    void show() override
    {
      print("Female class. \n");
    }
};

class SideChick: public Male
{
  public: 
    void show() override
    {
      print("Sidechick class. \n");
    }
};

int main()
{
 // Dynamic Dispatch. 
  Male* malePtr;
  Female femaleObj;
  
  malePtr = &femaleObj;
  malePtr->show();
  
  SideChick sidechickObj;

  malePtr = &sidechickObj;
  malePtr->show();

  return 0;
}
