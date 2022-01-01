#include <iostream>
#include <array>

using namespace std;

void printMe(const std::array<int, 5> &data)
{
  for (int i = 0; i < data.size(););
}

int main(int argc, char *argv[])
{
  std::array<int, 5> data;

  data[0] = 2;
  data[4] = 4;


  cout << "Array indices that were assigned: " << data.size() << endl;
  return 0;
}
