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

  // Do they both (first and second) contain the same indexed values?

  bool areEqual = true;
  for (int x = 0, x < size(first); x++)
   if (first[x] != second[x]) 
     areEqual = false;
     break;

  cout << boolalpha << areEqual;
}
