#include <print>

using namespace std;

class Male
{
  public:
    virtual void show() = 0;
    virtual ~Male() {};
};

class Female : public Male
{
  public:
    void show() override
    {
      print("Overrided the Male class.\n");
    }
};

int main()
{
  Female femaleObj;
  femaleObj.show();

  Male* maleObj = &femaleObj;
  maleObj->show();

  return 0;
}
