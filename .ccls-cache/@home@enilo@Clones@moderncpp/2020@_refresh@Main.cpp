#include <iostream>
#include <string>

using namespace std;

int main()
{
  string foo = "I am foo";
  string bar = "I am bar";

  string& fooRef = foo; 
  fooRef += ". Hi!";
  cout << fooRef; 

  cout << &fooRef << endl;
  fooRef = bar; 
  cout << &fooRef << endl; 
  cout << fooRef; 

  const string& barRef = bar; 
}
