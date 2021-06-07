#include <iostream>
#include <ctime>
#include <vector>

int main()
{
    // Initialize.
    std::vector<int> intArr(100000, 1);
    int sum = 0;

    // Optimization of Loops.
    int start_t = clock();

    for (size_t i = 0; i < intArr.size(); i++)
    {
        sum += intArr[i];
    }

    // for (auto && i = start_t; i < intArr.size(); i++)
    for (auto &i : intArr)
    {
        sum += i;
    }

    // Do iterator caching.
    std::vector<int>::const_iterator end = cend(intArr);
    for (std::vector<int>::const_iterator it = cbegin(intArr); it != end; ++it)
    {
        sum += *it;
    }
        
    std::cout << "Say less. Do more." << std::endl;

    int end_t = clock();

    std::cout << "Time: " << (end_t - start_t) / double(CLOCKS_PER_SEC) << "\n";
    std::cout << "Sum: " << "\n";
    return 0;
}