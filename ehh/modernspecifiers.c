#include <stdio.h>

int numbers(int a, int b, int c)
{
	int num1, num2, num3;
	num1 = a;
	num2 = b;
	num3 = c;
	return(num1, num2, num3);
}

int main()
{
	printf("a is %d, b is %d and c is %d", numbers(4, 9, 5));
	return 0;
}
