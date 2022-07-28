#include <iostream>
#include <string>

using namespace std;

/** There is not return value */
void PrintHello();
void Func();
void PrintValue(int x, char c, float y);
int Square(int x);
int Print(int x);
int Print(char c);
int Print(int x, char c);

int main()
{
  int z = 55;
  /** Main is the caller of the function.*/
  PrintHello();
  Func();
  PrintValue(z, 'A', 3.14);
  cout << "Square is: " << Square(14) << endl;

  std::cout << "Print is: " << Print('a') << std::endl;
  return 0;
}

void PrintHello()
{
  cout << "Howdy there partner!" << std::endl;
}

void Func()
{
  for(int i = 0; i < 5; i++)
  {
    cout << "i is: " << i << endl;
  }
}

void PrintValue(int x, char c, float y)
{
  cout << " The is integer is: " << 
    x << 
    " and the character is: " << 
    c << 
    " and the float is: " << 
    y << endl;
}

int Square(int x)
{
  return x * x;
}

int Print(int x)
{
  return x;
}

int Print(char c)
{
 return c;
}

int Print(int x, char c)
{
    return(x, c);
}
