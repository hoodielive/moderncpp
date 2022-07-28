#include <cstdlib>
#include <iostream>

using namespace std;

int returnNumbers(int argc)
{
  if (argc == 9)
  {
    cout << "You are in the year 9";
  }
  else 
  {
    cout << "Can't discern.";
  }
  return 0;
};

int main(int argc, char *argv[])
{
  if (argc != 1)
  {
    cout << "You entered: " << argc << " arguments.\n" << endl;
    for (int i = 0; i < argc; ++i)
    {
      cout << "argv[] is an array of strings." << endl;
      cout << argv[i] << '\n';
    }
  }

  returnNumbers(9);
  return 0;
}
