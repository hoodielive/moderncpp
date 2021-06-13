#include <iostream>
using namespace std;

int GetInteger(int theInt);

int GetIntegerFromUser()
{
  bool failure;
  int number;
  const int IGNORE_CHARS = 256;

  do
  {
    failure = false;
    cout << "Please enter an integer: ";
    cin >> number;

  } while (failure);

  if (cin.fail())
  {
    cin.clear();
    cin.ignore(IGNORE_CHARS, '\n');
    cout << "Input error! Please try again." << endl;
    failure = true;
  }

  return number;
};

int main()
{

  int number = GetIntegerFromUser();

  cout << "You entered integer: " << number << endl;

  return 0;
}
