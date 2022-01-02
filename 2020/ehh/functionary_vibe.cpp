#include <iostream>
#include "myMathFunctions.h"

void func1(int& valueToChange, const int& value)
{
    valueToChange = value;
}

const float& median(const int& a, const int& b, const int& c)
{
    return (a + b + c) / 3.f;
}

int main()
{
    int sum = add(10, 20);
    int result = subtraction(20, 4);
    float sumFloat = add(10.4f, 99.9f);

    int a = 20;
    int b = 10; 

    func1(a, b);

    std::cout << "The sum is: " << sum << "\n";
    std::cout << "The sumFloat is: " << sumFloat << "\n";
    std::cout << "The result is: " << result << "\n";
    std::cout << "a = " << a << "\n";
    std::cout << median(10, 20, 30) << "\n";

    return 0;
}