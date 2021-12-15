#include <iostream>
#include <string>
#include <vector>

std::vector<int> aVectoria;

void PrintVector()
{
		for (int i=0; i < aVectoria.size(); ++i)
		{
			std::cout << aVectoria[i];
		}
		std::cout << "\n\n";
}

int main()
{
	PrintVector();
	std::cout << "I ran but I didn't have any data." << std::endl;
}
