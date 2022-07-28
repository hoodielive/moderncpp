#include <iostream>
#include "_bitfields.cpp"

using namespace std;


int main()
{
  Date d;
  Date d3;
  d3.Month = 3;

  d.Year = 2016;
  d.Month = 7;
  d.Day = 22;

  cout << "Year: " << d.Year << endl
       << "Month: " << d.Month << endl
       << "Day: " << d.Day << endl;
 
  return 0;
}
