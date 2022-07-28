#include <iostream>
#include <string>
using namespace std;


void object_1(string str1, string str2)
{
  cout << str1 << str2 << endl;
};


int main()
{
  object_1("1", "2");
  object_1("3", "4");

  return 0;
}
