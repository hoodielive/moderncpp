#include <iostream>
#include <string>
#include <vector>

// Automatic deduction is one of the most importan and widely used features in modern C++.
// Use it as a placeholder for types in various contexts and let the compiler deduce the actual type.
// Prefer auto whenever possible.

using namespace std;

class ExploreAuto
{

};

int main(int argc, const char* argv[])
{
    auto i = 42;
    auto d = 42.5;
    auto s = "text";
    auto v = { 1, 2, 3 };
    auto b = new char[10]{ 0 };
    auto s1 = std::string { "text" };
    auto v1 = std::vector<int> { 1, 2, 3 };
//auto p = std::make_shared<int>(42); // std::shared_ptr<int>
    auto upper = [](char const c) { return toupper(c); };
    auto add = [](auto const a, auto const b) { return a + b; };

    template <typename F, typename T>
    auto apply(F&& f, T value)
    {
      return f(value);
    }

  return 0;
}
