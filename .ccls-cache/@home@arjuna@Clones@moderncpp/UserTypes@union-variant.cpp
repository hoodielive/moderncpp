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
	v.floating_point = 3.1457;
	printf("And now there is a floating point: %d\n", v.floating_point);

}
