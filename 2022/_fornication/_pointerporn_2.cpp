#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
  int int_var {43};
  int *p_int { &int_var };

  cout << "Int var: " << int_var << endl;
  cout << "p_int (Address in memory): " << p_int << endl;

  int int_var1 { 65 };

  int_var1 = 126;

  p_int = &int_var1;

  cout << "p_int (with different address): " << p_int << endl;


  return 0;
}
