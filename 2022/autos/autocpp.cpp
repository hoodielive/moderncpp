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

int main(int argc, char *argv[])
{
  // integer
  auto the_answer { 42 };

  // long
  auto foot { 12L };

  // float
  auto rootbeer { 5.0f };

  // double
  auto cheeseburger { 10.0 }; 

  // boolean
  auto politifact_claims { false };

  // string
  auto cheese { "string" };


  /* auto/ref types */


  // integer
  auto year { 2019 };

  // int& (int ref)
  auto& year_ref = year;

  // const int& (const ref)
  const auto& year_cref = year;

  // int* (int pointer)
  auto* year_ptr  = &year;

  // const int* (const int pointer)
  const auto* year_cptr = &year;


  /* Auto and Code Refactorings */

  

  return 0;

}
