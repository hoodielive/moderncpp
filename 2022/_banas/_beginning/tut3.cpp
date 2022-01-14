#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

int main(int argc, char *argv[])
{
  string sQuestion("Enter number 1: ");
  string sNum1, sNum2;

  cout << sQuestion;
  cin >> sNum1;

  cout << "Enter number 2: " << endl;
  cin >> sNum2;

  // You must convert the user input into a number.
  int nNum1 = stoi(sNum1);
  int nNum2 = stoi(sNum2);

  printf("%d + %d = %d\n", nNum1, nNum2, (nNum1 + nNum2));
  printf("%d - %d = %d\n", nNum1, nNum2, (nNum1 - nNum2));
  printf("%d * %d = %d\n", nNum1, nNum2, (nNum1 * nNum2));
  printf("%d / %d = %d\n", nNum1, nNum2, (nNum1 / nNum2));
  printf("%d %% %d = %d\n", nNum1, nNum2, (nNum1 % nNum2));

  return 0;
}
