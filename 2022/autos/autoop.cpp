#include <iostream>

using namespace std;

struct Dwarf
{

};

Dwarf dwarves[13];

struct Contract
{
  void add(const Dwarf&);
};

void form_company(Contract &contract)
{
  for (const auto& dwarf : dwarves)
  {
    contract.add(dwarf);
  }
}

int main()
{

  return 0;
}
