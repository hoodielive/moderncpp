#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

int main(int argc, char *argv[])
{
  // Is a birthday important based on age?
  // If its 1 - 18 (important), 21, 50 nope, > 65 (important)

  string s_Query = "What is your age? ";
  string s_Query_answer;

  cout << s_Query;
  cin >> s_Query_answer;

  int n_Numeric;
  n_Numeric = stoi(s_Query_answer);

  if ((n_Numeric <= 18))
  {
    printf("We are excited to celebrate your %dth birthday.", n_Numeric);
  }
  else if((n_Numeric >= 21) && (n_Numeric < 65))
  {
    printf("Its your %dth birthday but no one cares.", n_Numeric);
  }
  else if((n_Numeric >= 65))
  {

    printf("We are excited to celebrate your %dth birthday.", n_Numeric);
  }
  else 
  {
    printf("You are either non-living, non-born or dead.");
  }


  return 0;
}
