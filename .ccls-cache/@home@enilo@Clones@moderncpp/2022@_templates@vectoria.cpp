#include <vector>
#include <iostream>


int main(int argc, char *argv[])
{
  std::vector<int> v;

  // push_back - append to array

  v.push_back( 2 );
  v.push_back( 3 );
  v.push_back( 5 );

  std::cout << v[0] << "\n";
  std::cout << v[1] << "\n";
  std::cout << v[2] << "\n";

  for(int i = 0; i < 100; i++)
  {
    v.push_back( i * i);
  }

  std::cout << v[12] << "\n";

  return 0;
}
