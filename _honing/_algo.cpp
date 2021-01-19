#include <algorithm>
#include <iomanip>
#include <iostream>
#include <iterator>
#include <ostream>
#include <string>
#include <vector>

template<std::size_t N>
struct array
{
	char array[N];
	enum { size = N };
};

template<int I>
struct value_of {};

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

struct is_cpp20
{
	static array<1> deduce_type(std::vector<int>::size_type);
	static array<2> deduce_type(...);
	static std::vector<int> v;
	static int i;
	enum { value = value_of<sizeof(deduce_type(erase(v, i)))>::value };
};
