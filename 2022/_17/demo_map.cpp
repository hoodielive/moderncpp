#include <iostream>
#include <map>

int main(int argc, char *argv[])
{
  std::map<std::string, int> mapUsersAge { { "Osa", 45 }, { "Odi", 25 } }; 
  std::map<std::string, int> mapCopy{ mapUsersAge };
 
  if (auto [ iter, wasAdded ] = mapCopy.insert_or_assign("Odi", 26); !wasAdded) 
    std::cout << iter->first << " reassigned...\n";

  for (const auto& [key, value] : mapCopy) 
    std::cout << key << ", " << value << '\n';

  return 0;
}
