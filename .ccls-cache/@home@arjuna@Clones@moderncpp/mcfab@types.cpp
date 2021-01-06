#include <iostream> 

int main()
{

	int arr[5] = { 10, 20, 30, 40, 50 };
	int x = 123; 
	int* p = &x;
	std::cout << "The result of y is " << &p << std::endl; 
}
