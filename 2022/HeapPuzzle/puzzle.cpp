#include <iostream>
using namespace std;


int main(int argc, char *argv[])
{
  int i = 2;
  int j = 4;
  int k = 8;

  int *p = &i;
  int *q = &j;
  int *r = &k;

  k = i;
  cout << i << j << k << *p << *q << *r << endl;

  p = q;
  cout << i << j << k << *p << *q << *r << endl;

  *q = *r;
  cout << i << j << k << *p << *q << *r << endl;

  return 0;
}
