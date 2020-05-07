#include <cstdio>

union Variant 
{
	char string[10];
	int integer;
	double floating_point;
};

int main()
{
	Variant v;
	v.integer = 42;
	printf("This is the contents of our integer: %d\n", v.integer);
}
