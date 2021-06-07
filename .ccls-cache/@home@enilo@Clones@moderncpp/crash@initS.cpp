#include <iostream>


int main()
{
	int e = 42;
	int f{ 42 };
	int g = { 42 };
	int h(42);
	printf("This is initialized to: %d\n", e);
	printf("This is initialized to: %d\n", f);
	printf("This is initialized to: %d\n", g);
	printf("This is initialized to: %d\n", h);
}
