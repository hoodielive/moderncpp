#include <iostream>
#include <cstdlib>
#include <string>
#include <cmath>
#include <ctime>

using namespace std;

int main(int argc, char *argv[])
{

  // Find absolute value
  cout << "abs(-10) == " << abs(-10) << endl;

  // Give me the largest of 2 values
  cout << "max(5, 4) == " << max(5, 4) << endl;

  // pow
  cout << "pow(2, 3) = " << pow(2, 3) << endl;

  // ceil and floor and round
  cout << "ceil(10.45) = " << ceil(10.45) << endl;
  cout << "floor(10.45 = " << floor(10.45) << endl;
  cout << "round(10.45 = " << round(10.45) << endl;

  // SQRT
  cout << "cbrt(1) = " << cbrt(1000) << endl;
  cout << "sqrt(1) = " << sqrt(100) << endl;

  // Expressions
  cout << "exp(1) = " << exp(1) << endl;
  cout << "exp2(1) 2 ^ x = " << exp2(1) << endl;

  // e * e * e ~=20
  cout << "log(20.079) = " << log(20.079) << endl;

  // 2 * 2 * 2 = 8
  cout << "log2(20.079) = " << log2(20.079) << endl;

  // SQRT(A^2 + B^ 2) hypotnuse
  cout << "hypot(2, 3) = " << hypot(2, 3) << endl;

  /* Trigonometry
   * sin, cos, tan, asin, acos, atan, atan2, sinh,
   * cosh, tanh, asinh, acosh, atanh.
   */

  return 0;
}
