#include <iostream>
#include <string>
#include <vector> 

std::vector<int> aVector { 1, 2, 3, 4, 5 };

void PrintVector()
{
	for (int i=0; i < aVector.size(); ++i)
	{
		std::cout << "My Vectoria is " << aVector[i] << std::endl;
	}
	std::cout << "\n\n";
}

int main()
{
	aVector.pop_back();
	PrintVector();
	aVector.push_back(6);
	PrintVector();
	aVector.erase(aVector.begin() + 1);
	PrintVector();
	aVector.insert(aVector.begin() + 3, 8);
	return 0;
}
