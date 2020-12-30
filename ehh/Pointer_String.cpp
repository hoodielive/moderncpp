#include <iostream>
#include <string>

int main()
{
    std::string s; 
    s = "Aeonicsphere";
    std::cout << s.c_str() << std::endl;

    std::string p = "Preach to the Aeonicsphere";
    std::string mySubString = p.substr(6, 5);
    std::cout << "The substring is: " << mySubString << std::endl;

    std::string stringtofind = "Aeonicsphere";
    std::string::size_type found = s.find(stringtofind);

    if (found != std::string::npos)
    {
        std::cout << found << std::endl; 
    }
    else
    {
        std::cout << "The substring is not found.";
    }


    return 0;
}
