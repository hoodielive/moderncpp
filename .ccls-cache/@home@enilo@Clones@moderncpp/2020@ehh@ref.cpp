#include <iostream>

int main()
{
    int x = 123;
    int& y = x;

    std::cout << &x << "\n" << &y << std::endl;
    std::cout << x << "\n" << y << std::endl;

    x = 456;
    y = 789;

    std::cout << &x << "\n" << &y << std::endl;
    std::cout << x << "\n" << y << std::endl;
    return 0;
}