#include <ctime>
#include <iostream>

using namespace std;

int j = 1;

struct A
{
  A() { cout << "A"; }
};

struct B
{
  B() { cout << "B"; }
};

struct C
{
  B b;
  A a;
  C() : a(), b() {};
};

void f(char*) { cout << "1"; };
void f(int*) { cout << "2"; };

int main()
{
  C();
  int& i = j,j;
  j = 2;
  char c = 'A';
  f(&c);
  f(&j);

  cout << i << j;
}
