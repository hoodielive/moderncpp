#include <iostream>
#include <array>


int main()
{
    const int arrSize = 5;
    int myArr[arrSize];
    int my2DArr[arrSize][arrSize];


    for(size_t i = 0; i < arrSize; i++)
    {
        for (size_t k = 0; k < arrSize; k++)
        {
            std::cout << my2DArr[i][k] << std::endl;
        }
    }

    return 0;
}
