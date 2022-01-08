#include <iostream>

using namespace std;


int main(int argc, char *argv[])
{
  int x = 3;

  switch(x)
  {
    case 1:
      cout << "The value is equal to 1." << endl;
      break;
    case 2:
      cout << "The value is equal to 2." << endl;
    case 3:
      cout << "The value is equal to 3." << endl;
    default:
      cout << "Value unknown." << endl;
      break;
  }

  return 0;
}
