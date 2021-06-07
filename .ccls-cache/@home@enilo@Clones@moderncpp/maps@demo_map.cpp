#include <iostream>
#include <map>

int main()
{
	std::map<std::string, int> mapUsersAge { { "Osa Meji", 45 }, { "Ose Meji", 25 } };

	std::map mapCopy{ mapUsersAge };

	if (auto [iter, wasAdded] = mapCopy.insert_or_assign("Ose Meji", 26); !wasAdded)
		std::cout << iter->first << " reassigned..\n";

	for (const auto& [key, value] : mapCopy)
		std::cout << key << ", " << value << '\n';
}
