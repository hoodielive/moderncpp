#include <iostream>
#include <array>


int main()
{
    const int numberofelements = 3;
    int arr[numberofelements];
    arr[1] = 4;

    for(size_t i = 0; i < 2; i++)
    {
        std::cout << i << std::endl;
    }

    return 0;
}
