#include <print>

using namespace std;

void DefaultFunc(int x=100, int y=990)
{
  int martha = x + y;
  print("{}", martha);
}

int main()
{
  DefaultFunc(3, 9);   
  return 0;
}
