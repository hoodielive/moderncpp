#include <iostream>
#include <array>
#include <tuple>
#include <string>


using namespace std;

tuple<string,string> object_1(string str1, string str2);

void run()
{
   object_1("1", "2");
}

int main(int argc, char *argv[])
{
  string a, b;
  tie(a, b) = object_1("1", "2");

  cout << "Values in: " << a << b << endl;
  return 0;
}

tuple<string,string> object_1(string str1, string str2)
{
  return make_tuple(str1, str2);
}
