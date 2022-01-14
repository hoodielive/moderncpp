#include <cstdlib>
#include <iostream>

using namespace std;

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
  return 0;
}
