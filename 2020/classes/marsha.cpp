#include <iostream>

class MyClass
{
	public:
		int myInt = 0; 
		void IncrementInt()
		{
			myInt++;
			std::cout << "MyClass::IncrementInt: " << myInt;
		};
};

int main()
{
	MyClass classObject; 
	classObject.IncrementInt();
}
