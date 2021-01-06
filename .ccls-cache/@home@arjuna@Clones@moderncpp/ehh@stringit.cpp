#include <iostream>
#include <string>

int main()
{
    std::string s = "Iki, ";
    std::cout << s;

    std::string p = " Aeon";
    p += " of Sophia";

    std::cout << p << std::endl;

    char c1 = s[0];
    char c2 = s.at(0);
    char c3 = s[2];
    char c4 = s.at(2);

    std::cout << c1  
        << c2 
        << "\n"
        << c3
        << "\n"
        << c4
        << std::endl;

    std::string s1 = "Aeon";
    if (s1 == "Aeon")
    {
        std::cout << "The string is equal to the target." << std::endl;
    }

    std::string an_input;
    std::cout << "Please enter a string: " << "\n";

    std::getline(std::cin, an_input);
    std::cout << "You've entered: " << an_input;
    return 0;
}