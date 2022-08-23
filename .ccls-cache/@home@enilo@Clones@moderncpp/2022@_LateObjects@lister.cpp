#include <string>
#include <list>
#include <iostream>

using namespace std;

int main()
{
  list<string> names;

  names.push_back("Okanran");
  names.push_back("Oyeku");
  names.push_back("Obara");
  names.push_back("Ogbe");

  // Add value into the 4th place.

  list<string>::iterator pos = names.begin(); // or auto pos = names.begin();
  pos++;
  pos++;
  pos++;
  
  names.insert(pos, "Osa");

  // Remove the value in the 2nd place.

  pos = names.begin();
  pos++;

  names.erase(pos);

  // Print all values.

  for (pos = names.begin(); pos != names.end(); pos++)
  {
    cout << *pos << " ";
  }

  cout << endl;
}
