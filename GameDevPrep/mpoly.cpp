#include <print>

using namespace std;

class Nkisi
{
  
  public:
    Nkisi() {}
    virtual void display() const = 0;

    virtual ~Nkisi() {}
};

class Lunglubu : public Nkisi 
{
  public:
    void display () const override
    {
      print("Hello from Lunglubu class.");
    }
};

int main()
{
  Nkisi* lunglubu = new Lunglubu(); 
   
  lunglubu->display();
}
