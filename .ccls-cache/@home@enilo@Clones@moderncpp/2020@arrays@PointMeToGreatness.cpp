#include <iostream>

using namespace std;

int main()
{
    // Normal integer.
    int x;

    // A pointer to an integer.
    int *p_int;

    // Read it, assign addr of x to p_int
    p_int = &x;

    cout << "Please enter a number: ";

    // Put a value in x - could also use *p_int here.
    cin >> x;

    // Use * to get value.
    cout << *p_int << '\n';

    *p_int = 10;

    cout << x;
}
