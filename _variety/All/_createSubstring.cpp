#include <iostream>
#include <string>

using namespace std;


int main()
{
  string theString = "Jon Doe";
  string firststringtofind = "Jon";
  string secondstringtofind = "Doe";
  string firstfsub = theString.substr(0, 3);
  string secondsub = theString.substr(4, 7);

  std::cout << "The main string is: " << theString <<  "\n" 
    << "The first substr is: "
    << firstfsub
    << "\n"
    << "The second substr is: "
    << secondsub;

  return 0;
}

