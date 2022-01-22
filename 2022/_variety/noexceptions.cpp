#include <iostream>

using namespace std;


bool is_odd(int x) noexcept
{
    return 1 == (x % 2);
}

int main(int argc, char *argv[])
{
    is_odd(3);
    printf("um.. %d\n", is_odd(3));
    return 0;
}
