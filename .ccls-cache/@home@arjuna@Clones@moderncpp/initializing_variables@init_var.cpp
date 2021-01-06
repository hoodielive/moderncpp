#include <iostream>

// You would like to be able to initialize all variables in
// a standard manner. Uniform initialization was introducted
// in C++11 and can be used to initialize a variable of any type.

int main()
{
	// I recognize that its insane to static_cast here but okay.

	int number{ 0 };
	char another{ static_cast<char>(512) };

	double bigNumber{ 1.0 };
	float littleNumber{ static_cast<float>(bigNumber) };

	std::cout << number << another << bigNumber << littleNumber << std::endl;

	return 0;
}
