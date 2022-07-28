#include <iostream>
#include <string>

using namespace std;

int main(int argc, char *argv[])
{
  int age = 33;

  bool canIVote = (age >= 18) ? true : false;
  cout.setf(ios::boolalpha);
  
  cout << "Can Lawrence vote : " << canIVote << endl;

  return 0;
}
