#include <iostream>
#include <string>


using namespace std;

int main(int argc, char *argv[])
{
  cout << "Please enter your first name (followed by enter):\n";

  string first_name;
  cin >> first_name;

  cout << "Hello, " << first_name << "!\n";

  return 0;
}
