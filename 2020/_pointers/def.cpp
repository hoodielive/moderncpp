#include <iostream>

using namespace std;

int main()
{
    char c = 'a';
    char* p = &c;
    char d = *p; // Derefence the pointer (return value)

    std::cout << "Because d contains: " << d << std::endl;
}

