#include <iostream>
#include <stdexcept>

using namespace std;

bool is_odd(int x) noexcept
{
    return 1 == (x % 2);
}


int main()
{
    is_odd(3);
    cout << "This is the result of the boolean" << is_odd(3) << endl;

    return 0;
}
