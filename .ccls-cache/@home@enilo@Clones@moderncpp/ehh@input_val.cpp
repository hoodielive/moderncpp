#include <iostream>
#include <iomanip>
#include <climits>

int getChoice()
{
    int choice = 0;
    std::cout << "- Enter Choice: ";
    std::cin >> choice;

    // Error Check.

    while(!std::cin.good())
    { 
        std::cout << "ERROR: Fault Input! Try again.." << "\n";

        // Clear stream.

        std::cin.clear();
        std::cin.ignore(INT_MAX, '\n');

        std::cout << "- Enter Choice: ";
        std::cin >> std::setw(1) >> choice;
    }

    std::cin.clear();
    std::cin.ignore(INT_MAX, '\n');
    return choice;
};

int main()
{
    int choice = -1;

    choice = getChoice();

    while (choice > 0)
    {
        switch (choice)
        {
            case 1: 
                std::cout << "Option One" << "\n";
                break;
            case 2: 
                std::cout << "Option Two" << "\n";
                break;
            case 3: 
                std::cout << "Option Three" << "\n";
                break;
            case 4: 
                std::cout << "Option Four" << "\n";
                break;
            default:
                std::cout << "This is your grandfather speaking." << "\n";
                break;
        }

        choice = getChoice();
    }
}