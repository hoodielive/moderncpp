#include <iostream>
#include <vector>

auto i = 42;
auto d = 42.5;
auto s = "Text";
auto v = { 1, 2, 3 };

auto b = new char[10]{ 0 };
auto s1 = std::string { "text" };
auto v1 = std::vector<int> { 1, 2, 3 };

/** Problem? Why are we using all of this std::... ??? garbage!
* Is the abstractions adding more complexity to the 'problem' rather than
* helping me to solve the issue that I am using the language for? 
* auto p = std::make_shared<int>(42);
*/

void toUpper(){};

inline auto upper = [](char& const c) { return toUpper(); };

auto add = [](auto const a, auto const b) { return a + b; };