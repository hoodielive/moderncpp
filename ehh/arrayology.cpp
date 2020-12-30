#include <iostream>
#include <array>

int main()
{
    const int arraySize = 3;
    int myArray[arraySize]{ 2 };
    myArray[1] = 5;
    
    for(size_t i = 0; i < 3; i++)
    {
        std::cout << i << myArray[2] << std::endl;
    }
    
    return 0;
}