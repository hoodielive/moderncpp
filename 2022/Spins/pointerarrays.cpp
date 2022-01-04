#include <iostream>
using namespace std;

struct College
{
  char name[256];
};

void print_name(College* college_ptr)
{
  printf("%s College\n", college_ptr->name);
}

int main(int argc, char *argv[])
{
  College best_colleges[] =
  {
    "Magdalen",
    "Nuffield",
    "Kellogg"
  };

  print_name(best_colleges);
  printf("Best colleges is: %p\n", best_colleges);
  return 0;
}
