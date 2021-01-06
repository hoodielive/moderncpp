#include <iostream>
#include <string>

enum class Race
{
	Dinan,
	Teklan,
	Ivyn,
	Moiran,
	Camite,
	Julian,
	Aidan
};

int main()
{
	Race langoboard_race = Race::Aidan;
	std::cout << langoboard_race << std::endl;
}
