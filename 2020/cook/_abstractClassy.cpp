#include <iostream>

using namespace std;

class MyAbstractClass {
public:
  virtual void doWork() = 0;
};

class MyDerivedClass : public MyAbstractClass {
  void doWork() { cout << "Hello, from the derived class." << endl; }
};

int main() {
  MyAbstractClass *o = new MyDerivedClass;
  o->doWork();
}
