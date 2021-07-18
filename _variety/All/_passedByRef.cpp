#include <iostream>
#include <string>

using namespace std;

void byRef(int& byreference)
{
  byreference++;
  std::cout << "Argument passed by reference: " << byreference << "\n";
};

void byConstRef(const string& constRefString)
{
  cout << "You are a geek and a: " << constRefString << "\n";

}

int main()
{
  int x = 123;
  byRef(x);

  string p = "nerd";
  byConstRef(p);
}

