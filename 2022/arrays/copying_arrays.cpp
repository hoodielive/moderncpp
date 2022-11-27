#include <iostream>
using namespace std;

int main()
{
  int first[] = {10, 20, 30};
  int second[3];

  for (int i = 0; i < size(first); i++)
  {
    second[i] = first[i];
  }

  for (int number: second)
    cout << number << endl;
}
