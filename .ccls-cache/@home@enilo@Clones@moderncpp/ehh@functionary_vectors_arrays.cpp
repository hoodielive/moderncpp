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

void printVector(const std::vector<int>& vec)
{
    for (size_t i = 0; i < vec.size(); i++)
    {
        std::cout << vec[i] << "\n";
    }
}

int main()
{
    const int arrSize = 10; 
    int arr[arrSize];
    std::vector<int> myVect;

    replaceArr(myVect.size(), myVect.data(), 200);
    printVector(myVect);
    printArr(arrSize, arr);
    return 0;
}