#include <iostream>

int addTwoNumbers(int a, int b)
{
    return a + b;
}

void PrintResult()
{
    int result = addTwoNumbers(4, 5);
    std::cout << result << std::endl;
}

int main()
{
    PrintResult();
    return 0;
}