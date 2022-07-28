#include <iostream>


auto upper = [](char const c)
{
  return toupper(c);
};

auto add = [](auto const a, auto const b)
{
  return a + b;
};


template<typename F, typename T>
auto apply(F&& f, T value)
{
  return f(value);
}

int get_size(int fur)
{
  return fur;
}

int main(int argc, char *argv[])
{
  const int bufSize = 512;
  const int i = get_size(4);
}
