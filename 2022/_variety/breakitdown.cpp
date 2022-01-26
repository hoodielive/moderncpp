#include <iostream>

using namespace std;


struct TryMeAgain
{
    TryMeAgain(size_t max_size) : max_size { max_size }, length{}
    {
      if (max_size == 0)
      {
        throw std::runtime_error{ "Max size must be at least 1." };
      }

      buffer = new char[max_size];
      buffer[0] = 0;
    }

    ~TryMeAgain()
    {
      delete[] buffer;
    }

  private:
    char* buffer;
    size_t length;
    size_t max_size;

};
