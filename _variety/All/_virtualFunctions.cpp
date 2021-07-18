#include <iostream> 

using namespace std; 

class BasicCar
{
  public:
    virtual void Start() { cout << "Basic Car Started" << endl; }
};

class AdvanceCar: public BasicCar
{
  public:
    void Start() { cout << "Advance Car Started" << endl; }
};

int main()
{
  BasicCar *p = new AdvanceCar();
  p->Start();
}

