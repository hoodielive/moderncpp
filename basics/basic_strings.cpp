#include <iostream>
#include <string>

using namespace std;

int main()
{
  string myString = "hello";
  string myOtherString = " world";

  cout << myString + myOtherString;
  cout << myString + " You";

  myString.append("Dog");

  string foo = "I am foo";
  string bar = "I am bar";

  string &fooRef = foo;
  fooRef += ". Hi!";
  cout << fooRef;

  fooRef = bar;
  cout << &fooRef << endl;
  cout << fooRef;

  const string &barRef = bar;
}