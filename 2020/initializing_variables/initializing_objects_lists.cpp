#include <iostream>
#include <vector>

/**
 *
 * You would like to construct objects from multiple
 * objects of a given type.
 *
 * Modern C++ provides initializer lists that can be
 * used to supply many objects of the same type to a
 * constructor.
 **/


int main()
{
	using MyVector = std::vector<int>;

	MyVector vectorC{1, 10};

	std::cout << vectorC.size() << " " << vectorC[0] << std::endl;

	std::initializer_list<int> initList{1, 10};
	MyVector vectorD(initList);

	std::cout << vectorD.size() << " " << vectorD[0] << std::endl;

	return 0;
}

