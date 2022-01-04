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

void print_names(College* colleges, size_t n_Colleges)
{
  for (size_t i=0; i < n_Colleges; i++)
  {
    printf("%s College\n", colleges[i].name);
  }
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

  print_names(best_colleges, 4);

  return 0;
}
