#include <algorithm>
#include <iomanip>
#include <iostream>
#include <iterator>
#include <ostream>
#include <string>
#include <vector>

tempalte<std::size_t N>
struct array
{
	char array[N];
	enum { size = N };
};

template<int I>
struct value_of
{};

template<>
struct value_of<1>
{
	enum { value = true };
};

template<>
struct value_of<2>
{
	enum { value = false };
};

void* erase(...);

