#include <iostream> 


int main(int argc, char *argv[])
{
  const int MAX = 6;
  int array[6] { 2, 4, 6, 8, 10, 12 };

  for (int i = 0; i < MAX; i++)
  {
    std::cout << "array [" << array[i] << "] is now finished." << std::endl;
  }

  return 0;
}
