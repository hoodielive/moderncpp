#include <iostream>

int main()
{
    int x = 3;
    int* p = &x;

    std::cout << *p << std::endl;

    *p = 456;

    std::cout << *p << std::endl;
}