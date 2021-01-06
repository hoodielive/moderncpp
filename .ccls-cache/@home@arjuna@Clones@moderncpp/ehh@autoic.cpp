#include <typeinfo>
#include <iostream>

int main()
{
    auto c = 'a';
    auto x = 123;
    auto d = 123.456;

    int x = 123;
    auto& y = x;

    std::cout << typeid(c) << std::endl;

    return 0;
}