#include <iostream>

using namespace std;


int Add(int a, int b, int c, int d, int e)
{
  return(a + b + c + d + e); 
};

int main()
{
  int x =  Add(2, 3, 4, 5, 6);
  cout << x << endl;

  return 0;
}
