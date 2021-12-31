#include <iostream>
#include <vector>


using namespace std;

int main(int argc, char *argv[])
{
  vector<int> v { 1, 2, 3, 4, 5 };

  for (int i = 0; i < v.size(); i++)
  {
    cout << v[i] << "\n";
  }
  return 0;
}
