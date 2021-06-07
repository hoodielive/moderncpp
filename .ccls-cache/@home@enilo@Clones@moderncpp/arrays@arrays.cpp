#include <iostream>

int main()
{
	int array[]  = { 1, 2, 3, 4, 5 };

	int size = 5;

	for (int i=0; i < size; i++)
	{
		printf("The printing of arrays %d\n", array[i]);
		if (array[i] == 3)
			break;
	}
	return 0;
} 
