#include <iostream>
#include <map>

int main()
{
    std::map<std::string, int> mapUsersAge {{ "rico", 45}, { "jori", 23 }};

    std::map mapCopy{mapUsersAge};

    if (auto [iter, wasAdded] = mapCopy.insert_or_assign("jori", 24); !wasAdded)
        std::cout << iter->first << "reassigned...\n";

    for (const& [key, value] : mapCopy)
        std::cout << key << ", " << value << '\n';
}