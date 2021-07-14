#include <iostream>
#include <string>

using namespace std;

int main()
{
  const int n = 5;

  int array[5]{ 10, 20, 30, 40, 50 };

  for (int i=0; i < 5; i++)
  {
    cout << "This is the number: " << array[i] << std::endl;
  }
}
