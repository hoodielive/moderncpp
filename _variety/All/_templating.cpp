#include <iostream>

using namespace std;

template <typename T>

void myfunction(T param)
{
  cout << "The value of this parameter: " << endl;
}

int main(int argc, const char* argv[])
{
  myfunction<int>(123);
}
