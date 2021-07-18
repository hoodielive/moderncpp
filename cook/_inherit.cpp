#include <iostream>

using namespace std;

class MyBaseClass {
public:
  int condor1, condor2;

  virtual void doWork() {
    std::cout << "Hello, from a derived class." << std::endl;
  }

protected:
  char c;
  int x;

private:
  char onyx;
  int onion;
};

class MyDerivedClass : public MyBaseClass {
  // condor1 and condor2 also accessible here.
  // c and x also accessible here.
  // onyx and onion is NOT accessible here.

public:
  int xa;

  virtual void doWork() {
    std::cout << "Hello, from a myDerived class." << std::endl;
  }
};

class MySecondDerivedClass : public MyDerivedClass {
public:
  bool b;
};

int main() {
  MyDerivedClass o;

  o.condor1 = 33;
  o.condor2 = 43;

  MySecondDerivedClass k;
  k.xa = 33;
  k.b = false;

  MyBaseClass *p = new MyDerivedClass;
  p->doWork();
  delete p;

  MyDerivedClass *f = new MySecondDerivedClass;
  f->doWork();
  delete f;
  // o.c = 'a'; // Error, not accessible to object because of private and
  // protected access modifiers. o.x = 123; // Error, not accessible to object
  // because of private and protected access modifiers.
}
