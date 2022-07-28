#include <iostream>
#include <string>


using namespace std;

void returnString(string &str);

int main(int argc, char *argv[])
{
  // Stack Allocation
  int p = 3;
  int *s = &p;

  // Heap allocation
  int *oturupon = new int;

  cout << "s is: " << s << endl;
  cout << "&p is: " << &p << endl;

  *s = 9;

  cout << "s is: " << s << endl;
  cout << "&p is: " << &p << endl;
  cout << "The value of p is: " << p << endl;

  string str = "Druid";

  returnString(str);

  cout << str << endl;


  // Heap allocation
  cout << sizeof(*oturupon) << endl;

  delete oturupon; 

  cout << "Oturupon is size of: " << sizeof(*oturupon) << endl;

  cout << "The address of Oturpon is: " << &oturupon << endl;

  oturupon = nullptr;

  cout << "Oturupon is size of: " << sizeof(*oturupon) << endl;
  cout << "The address of Oturpon is: " << &oturupon << endl;

  oturupon = 0;

  cout << "Oturupon is size of: " << sizeof(*oturupon) << endl;
  cout << "The address of Oturpon is: " << &oturupon << endl;

  cout << sizeof(char) << endl;
  cout << sizeof(int) << endl;
  cout << sizeof(double) << endl;
  cout << sizeof(bool) << endl;
  cout << sizeof(long) << endl;

  return 0;
}


void returnString(string &str)
{
    str += "!";
}


