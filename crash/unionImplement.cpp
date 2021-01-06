#include <iostream>

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
	v.floating_point = 2.71283849;
	printf("You are now looking at euler's e: ", v.floating_point);
}
