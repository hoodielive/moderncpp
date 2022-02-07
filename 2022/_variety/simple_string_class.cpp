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

    ~SimpleString()
    {
      delete[] buffer;
    }

    SimpleString(const SimpleString& other) : max_size{ other.max_size },
      buffer{ new char[other.max_size] }, length { other.length } 
    {
      std::strncpy(buffer, other.buffer, max_size);
    }

    SimpleString(SimpleString&& other) noexcept : max_size(other.max_size),
      buffer(other.buffer), length(other.length)
    {
        other.length = 0;
        other.buffer = nullptr;
        other.max_size = 0;
    }

    SimpleString& operator=(const SimpleString& other)
    {
      if (this = &other) return *this;

      const auto new_buffer = new char[other.max_size];
      delete[] buffer;
      buffer = new_buffer; 
      length = other.length;
      max_size = other.max_size;
      std::strncpy(buffer, other.buffer, max_size);
      return *this;
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
