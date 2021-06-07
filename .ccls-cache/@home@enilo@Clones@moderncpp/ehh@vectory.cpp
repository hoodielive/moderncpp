#include <iostream>
#include <string>
#include <vector>

int main()
{
    std::vector<int> myIntVect;
    std::vector<std::string> myStrVect;

    myIntVect.push_back(23);
    myIntVect.push_back(2);
    myIntVect.push_back(434);
    myIntVect.push_back(565);

    myStrVect.push_back("Hulu");
    myStrVect.push_back("Netflix");
    myStrVect.push_back("Prime Video");
    myStrVect.push_back("Disney+");

    // myStrVect.erase(myStrVect.begin() + 2);

    int integerToRemove = 2;
    bool found = false;

    for (size_t i = 0; i < myIntVect.size(); i++)
    {
        if (myIntVect[i] == integerToRemove)
        {
            myIntVect.erase(myIntVect.begin() + i);
            found = true; 
        }
        std::cout << myIntVect[i] << "\n";

        if (found == false)
            std::cout << "integerToRemove has been erased or is not found." << std::endl;
    }

    for (size_t k = 0; k < myStrVect.size(); k++)
    {
        std::cout << myStrVect[k] << "\n";
    }

    std::cout << "Size of myIntVect: " << myIntVect.size() << std::endl;
    std::cout << "Size of myStrVect: " << myStrVect.size() << std::endl;

    myIntVect.clear();
    std::cout << "Size of myIntVect: " << myIntVect.size() << std::endl;

    return 0;
}