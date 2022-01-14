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

  /* 
    Problem
    Enter Miles: 5
    5 miles equals 8.0467 kilometers.
   */

  string sMiles;
  double dMiles, dKilometers;
  cout << "Enter miles: ";
  cin >> sMiles;

  dMiles = stod(sMiles);
  dKilometers = dMiles * 1.60934;
  printf("%.1f miles equals %.4f kilometers\n", dMiles, dKilometers);

  return 0;
}
