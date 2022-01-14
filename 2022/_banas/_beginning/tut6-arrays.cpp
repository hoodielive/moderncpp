#include <iostream>
#include <cstdlib>
#include <string>
#include <cmath>
#include <ctime>

using namespace std;

int main(int argc, char *argv[])
{
  for (int i=0; i <= 10; ++i)
  {
    cout << i << endl;
  }

  int arr1[] = { 1, 2, 3 };
  int arrSize = sizeof(arr1)/sizeof(arr1[0]);

  for (int i=0; i <= arrSize; ++i)
  {
    cout << arr1[i] << endl;
  }

  // Abbreviate
  for (auto x: arr1 ) cout << x << endl;

  int num = 4;
  string isEven = (( num % 2 ) == 0) ? "Even" : "Odd";

  cout << "isEven is : " << isEven  << endl;

  // Print out all odd numbers from 1 to 20.

  int selectOdds[] { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20 };

  cout << "The size of selectOdds is: " << sizeof(selectOdds) << endl;
  cout << "The size of index 0 of selectOdds is: " << sizeof(selectOdds[0]) << endl;

  arrSize = sizeof(selectOdds)/sizeof(selectOdds[1]);

//  for (auto j : selectOdds ) cout << j << endl;
  for (auto j : selectOdds )
  {
    if (j == (num % 1) == 1)
    {
      printf("The odd is %d", j);
    }
  }

  num = 1;
  string isOdd = (( num % 1) == 1) ? "Even" : "Odd";

  cout << "isOdd is Even or Odd : " << isOdd << endl;

  return 0;
}
