#include <iostream>
#include <cstdio>
#include <string>
using namespace std;


void petro(char* shrew)
{
  printf("Fear not, sweet wench, they sahll not touch thee, %s", shrew);
  shrew[0] = 'K';
}

int main(int argc, char *argv[])
{
  string s = "Hello";
  string f = "World";

  string combine = s + f;

  char c1 = s[0];
  char c2 = s.at(0);
  char c3 = s[3];
  char c4 = s.at(3);

  cout << "The value of that variable is: " << combine << std::endl;
  cout << "First character: " << c1 << ", sixth character: " << c3;


  if (s == "Hello")
  {
    std::cout << "The string is equal to \"Hello\"";
  }

  return 0;
}
