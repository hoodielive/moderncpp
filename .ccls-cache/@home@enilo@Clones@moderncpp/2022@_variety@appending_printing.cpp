#include <cstdio>
#include <cstring>
#include <stdexcept>

using namespace std;


struct SimpleString
{
  void print(const char* tag) const
  {
    printf("%s: %s", tag, buffer);
  }
};

int main(int argc, char *argv[])
{
  return 0;
}
