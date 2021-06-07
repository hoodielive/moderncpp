#include <iostream>
#include <map>

int main()
{
    std::map<std::string, int> mapUsersAge {{ "rico", 19 }, { "ardona", 23}};

    std::map mapCopy{ mapUsersAge };

    if (auto [iter, wasAdded] = mapCopy.insert_or_assign("ardona", 32); !wasAdded)
        std::cout << iter->first << " reassigned..\n";

    for (const auto& [key, value] : mapCopy)
        std::cout << key << ", " << value << '\n';
}