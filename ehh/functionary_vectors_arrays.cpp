#include <iostream>
#include <vector>

void printArr(const int& size, const int* arr)
{
    for (size_t i = 0; i < size; i++)
    {
        std::cout << arr[i] << "\n";
    }
}

void replaceArr(const int& size, int* arr, const int& value)
{
    for (size_t i = 0; i < size; i++)
    {
        arr[i] = value;
    }
}

int main()
{
    const int arrSize = 10; 
    int arr[arrSize];

    for (size_t i = 0; i < arrSize; i++)
    {
        arr[i] = i; 
    }

    return 0;
}