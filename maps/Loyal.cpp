#include <iostream> 
#include <array>

int main()
{
	int myInt = 1;
	bool myBool = false;
	char myChar = 'a';

	int[] customersAges[5] = { 1, 2, 3, 4, 5 };

	std::cout << "The size of an int is " << sizeof(myInt) << ".\n";
	std::cout << "The size of an bool is " << sizeof(myBool) << ".\n";
	std::cout << "The size of an int is " << sizeof(myChar) << ".\n";
	std::cout << "The size of the array is " << sizeof(customersAges) << ".\n";


	return 0;
}
