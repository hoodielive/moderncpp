#include <iostream>

using namespace std;

int main()
{
  int sample[10]{};
  int t{};

  // load array
  for (t=0; t < 10; ++t) sample[t] = t;

  // display the array
  for (t=0; t < 10; ++t)
  {
    cout << "This is sample[" << t << "]: " << sample[t] << "\n";
  }
}
