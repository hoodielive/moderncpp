#include <iostream>
#include <cstddef>
#include <cstdio>

using namespace std;

void Func();

int main()
{
	unsigned long maximum = 0;
	unsigned long values[] = { 10, 50, 20, 40, 0 };

	for (size_t i=0; i < 5; i++)
	{
		if (values[i] > maximum) maximum = values[i];
	}

	printf("The maximum value is %lu\n", maximum);
	cout << Func() << endl;
	return 0;
};


void Func()
{
	int array[8][8];

	for (int i=0; i < 8; i++)
	{
		for (int j=0; j < 8; j++)
		{
			array[i][j] - i * j; // Set each element to a value.
		}
	}

	std::cout << "Multiplication table:\n";
	for (int i = 0; i < 8; i++)
	{
		for (int j=0; j < 8; j++)
		{
			std::cout << "[  " << i << " ][" << j << " ] = ";
			std::cout << array[i][j] << " ";
			std::cout << "\n";
		}
	}
};
