#include <cstdio>

struct Book
{
	char name[256];
	int pages;
	int year;
	bool hardcover; 
};

int main()
{
	Book neuromancer; 
	neuromancer.pages = 275;
	printf("The book neuromancer has %d pages.\n", neuromancer.pages);
	return 0;
}
