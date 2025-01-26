#include <print>

using namespace std;

class MartialArts
{
public: 
  MartialArts() {}

  virtual void display()  = 0;  // Pure function
  
  virtual ~MartialArts() {}
};


class Jujitsu : public MartialArts
{
 public: 
  void display() override
  {
     print("This is from the jujitsu class.") ;
  }
};

int main()
{
  Jujitsu jujitsuObj;
  jujitsuObj.display();

  MartialArts* martialObj = &jujitsuObj;
  martialObj->display();

}
