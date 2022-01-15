#include <iostream>
#include <cmath>
#include <cstdlib>
#include <string>

using namespace std;

int main(int argc, char *argv[])
{
  string answer;

  cout << "Enter a integer: " << endl;
  cin >> answer;

  int n_newInt;

  n_newInt = stoi(answer);

  if (n_newInt <= 10)
  {
    cout << "You have entered in an int that is less than 10." << endl;
  }
  else if (n_newInt >= 10)
  {
    cout << "You have entered an int that is greater than 10." << '\n';
  }
  else
  {
    cout << "You are somewhere off in the carnal mind." << endl;
  }

  cout << "The floor of 10.45 is: " << floor(10.45) << endl;
  cout << "The ceil of 10.45 is: " << ceil(10.45) << endl;
  cout << "The pow of 2, 5 is: " << pow(2, 5) << endl;
  cout << "The hypotenuse of 100 is: " hypot(10, 5) << endl;
  cout << "The square root of 5 is: " << sqrt(5) << endl;

  return 0;
}
