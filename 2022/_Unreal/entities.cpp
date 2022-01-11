#include <iostream>


using namespace std;

struct StructName
{
  int x;
  float y;
  
  void ToString() { cout << "Hello from StructName! " << endl; }
};


int main()
{
  // Declare variable instance
  int x{};

  // declare variable instance (object) of type StructName.
  StructName demoInstance = { 13, 15.5f };

  cout << demoInstance.x << endl; 

}

