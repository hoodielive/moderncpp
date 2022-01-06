#include <iostream>
#include <cmath>
#include <cstdlib>
#include "Account.h"
using namespace std;


int main(int argc, char *argv[])
{
  Account account(0.235588473);
  char action;
  double amount;

  if (argc > 1)
    account.deposit(atof(argv[1]));

  return 0;
}



