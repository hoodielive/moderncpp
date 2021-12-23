#include <iostream>
#include <cstring>

using namespace std; 

int main(int argc, const char* argv[])
{
    auto upper = [](char const c) { return toupper(c); };
    printf("The following character is: %u", upper);
    return 0;
}
