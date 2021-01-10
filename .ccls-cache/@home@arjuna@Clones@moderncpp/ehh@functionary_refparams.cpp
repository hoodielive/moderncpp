#include <iostream>
#include <ostream>


void passByVal(std::string name)
{
    name = "Hoodie";
}

void passByRef(std::string &name)
{
    name = "HoodWinked";
}

int main()
{
    std::string character = "Esu";
    passByVal(character);
    passByRef(character);

    std::cout << character << std::endl;
}