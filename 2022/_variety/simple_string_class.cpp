#include <iostream>

using namespace std;


struct SimpleString
{
  SimpleString(size_t max_size) 
    : max_size{ max_size }, length{} 
    {
      if (max_size == 0)
      {
        throw std::runtime_error{ "Max size must be at least 1." };
      }
      buffer = new char[max_size];
      buffer[0] = 0;
    }

    ~SimpleString()
    {
      delete[] buffer;
    }

  private:
    size_t max_size;
    char* buffer;
    size_t length;
};

int main(int argc, char *argv[])
{
  
  return 0;
}
