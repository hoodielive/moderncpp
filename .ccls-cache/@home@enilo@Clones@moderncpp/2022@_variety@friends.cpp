#include <iostream>

using namespace std;


// Friend declarations appear in a class body and grants a function or another class access
// to private and protected members of the class where the friend declaration appears.


class Orun
{
  private:
    int x, y;

  public:
    int data;

    // This non-member function operator<< will have access to Orun's private members.
    friend std::ostream& operator<<(std::ostream& out, const Orun& o);
};

int main(int argc, char *argv[])
{
  std::ostream& << "Oppression" << endl;
  return 0;
}
