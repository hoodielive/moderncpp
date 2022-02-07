#include <cstring>
#include <cstdio>
#include <stdexcept>
#include <iostream>

using namespace std;

struct SimpleString
{
  SimpleString(size_t max_size) : max_size{ max_size }, length{} 
    {
      /* Remember if size_t is unsigned and cannot be negative, so
       you don't need to check for this bogus condition. */

      if (max_size == 0)
      {
        throw std::runtime_error{ "Max size must be at least 1 byte." };
      }
      else 
      {
        printf("Hello, thanks for playing along.");
      }

      buffer = new char[max_size]; 
      buffer[0] = 0;
    }

    void print(const char* tag) const
    {
      printf("%s: %s", tag, buffer);
    }

    bool append_line(const char* x)
    {
      const auto x_len = strlen(x);

      if (x_len + length + 2 > max_size) return false;

      strncpy(buffer + length, x, max_size - length);

      length += x_len;

      buffer[length++] = '\n';

      buffer[length] = 0;

      return true;
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

  SimpleString string { 115 };
  string.append_line("Starbucks has good coffee.");
  string.append_line("Nothing but joy today!");
  string.print("A: ");
  string.append_line("Monkey fist!");
  string.append_line("Snake and crane");
  string.print("B: ");

  if (!string.append_line("Galatica!")) printf("String was not big enough to append");

  return 0;
}
