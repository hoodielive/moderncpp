#include <iostream>
#include <array>

int main()
{
    int myArray[5] { 1, 2, 3, 4, 5 };

    int mySecondArray = myArray[1];
    std::array<int, 5> myDifArray { 1, 2, 3, 4, 5 };

    std::cout << std::size(myDifArray) << std::endl;

}
