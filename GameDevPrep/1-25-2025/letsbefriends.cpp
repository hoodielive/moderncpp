#include <print>

using namespace std;

class Dikenga
{
  private:
    int _myData; // private member

  public: 
    // constructor to initialize private data (_myData)
    Dikenga(int value) : _myData(value) {}

    // friend function declaration
    friend void display(const Dikenga& obj);
    friend class MyDikenga;
};

class MyDikenga
{
  public:
    void accessPrivateData(MyDikenga obj)
    {
      print("{} \n", obj._myData);
    }
};

void display(const Dikenga& obj)
{
  print("Privata data is: {}.\n", obj._myData);
}
  
int main()
{
  Dikenga obj(42);
  display(obj);
  return 0;
}
