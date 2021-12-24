#include <iostream> 
#include <ostream>

using namespace std;


void operator=(operator<<());
void operator=();
void Func(int c);
void Func(char x);
void Func(int c, char x);


int main(int argc, char *argv[])
{
  Func(4, 'A');
  
  return 0;
}


void Func(int c)
{
  c = 3;

}
void Func(char x)
{
   x = 'A';
}
void Func(int c, char x)
{
  c = 45;
  x = 'a';
}
