#include <cstdio>

struct Taxonomist
{
	Taxonomist() 
	{ 
		printf("(no argument)\n"); 
	}
	Taxonomist(char x) 
	{ 
		printf("char: %c\n", x); 
	}
	Taxonomist(int x) 
	{ 
		printf("int: %d\n", x); 
	}
	Taxonomist(float x) 
	{ 
		printf("float: %f\n", x); 
	}
};

struct Earth
{
	~Earth()
	{
		printf("Making way for hyperspace bypass.");
	}
};

int main()
{
	Taxonomist t1; 
	Taxonomist t2{ 'c' };
	Taxonomist t3{ 4 };
	Taxonomist t4{ 3.14f };
}
