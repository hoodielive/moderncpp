#include <print>

using namespace std;

class Dikenga
{
  public:
    Dikenga();
    ~Dikenga();

  // Static functions
  static void printDikenga()
  {
    print("Static function called.\n");
  }

  private: 
    int* myDikenga;
};

Dikenga::Dikenga()
{
  print("Constructor called: Allocating resources: \n");
  myDikenga = new int(42);
}

Dikenga::~Dikenga()
{
  print("Destructor called: Releasing resources: \n"); 
  delete myDikenga;
}

int main()
{
  Dikenga obj;
  obj.printDikenga();
  return 0;
}
