#include <iostream>
using namespace std;


int main()
{
  int array[4]{ 1, 2, 3, 4 };
  const int length = 4;

  int duplexArray[4][4] { 2, 4, 8, 16 };

  for (int i = 0; i < length; i++)
  {
    for (int j = 0; j < length; j++)
    {
      cout << "This is the value at this index: " << array[j] << endl;
    }

    cout << "This is the value at this index: " << array[i] << endl;
  }

  return 0;
}
