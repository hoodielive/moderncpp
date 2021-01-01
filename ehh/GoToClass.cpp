#include <iostream>
#include <string>
#include <vector>
#include "Classy.h"

int main()
{
    
    Person person1("Lawrence", 29, false, "Somewhere", "Linux SysAdmin", false);
    Person person2();

    std::cout << person1.getName() << std::endl;
    person1.setName("Larry");
    std::cout << person1.getName() << std::endl;
    person1.setAddress("Apoko Lane");
    std::cout << person1.getAddress() << std::endl;
    person1.setIsFemale(false);
    std::cout << "Is the user a female: " << person1.getIsFemale() << std::endl;
    std::cout << person1.getProfession() << std::endl;
    person1.setProfession("Real Estate Agent");
    std::cout << person1.getProfession() << std::endl;
    std::cout << "Hello, from end of program." << std::endl;

    std::cout << person1.toString() << std::endl;
}