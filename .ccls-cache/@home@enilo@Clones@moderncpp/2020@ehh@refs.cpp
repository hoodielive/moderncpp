#include <iostream>

int main()
{
    int x = 123;
    const int& y = x;

    x = 456;

    std::cout << x << "\n" << y << std::endl;

    // Both x and y now hold the value of 456.
}