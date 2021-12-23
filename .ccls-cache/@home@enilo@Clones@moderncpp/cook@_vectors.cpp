#include <iostream>
#include <vector>
#include <list>

struct foo
{
    int a;
    double b;
    std::string c;

    foo(int a, double b, std::string const& c) : a(a), b(b), c(c) {}
};

int main(int argc, const char* argv[])
{
    double d[3];
    int* arr = new int[5];

    // Initialize from an initialization list:
    std::vector<int> v1 { 1, 2, 3, 4, 5 };

    // Initialize from an array: 
    int arr2[] = { 1, 2, 3, 4, 5 };
    std::vector<int> v21(arr, arr + 5);
    std::vector<int> v22(arr + 1, arr + 4);

    // Initialize form another container.
    std::list<int> l{ 1, 2, 3, 4, 5 };
    std::vector<int> v3(l.begin(), l.end());

    // Initialize from a count and a value.
    std::vector<int> v4(5, 1);

    // Modify content of std::vector:
    v1.push_back(6);
    v1.pop_back();

    foo std::vector<foo> v3;
    v3.emplace_back(1, 1.0, "one"s);

};
