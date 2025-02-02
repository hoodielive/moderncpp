#include <print> 
#include <memory> 

using namespace std;

struct B; // forward declaration
         
struct A
{
  shared_ptr<B> bPtr;
  ~A() { print("A destroyed."); }
};

struct B
{
  weak_ptr<A> aPtr;
  ~B() { print("B destroyed."); }
};

int main()
{
  auto a = make_shared<A>(); 
  auto b = make_shared<B>(); 
  a->bPtr = b;
  b->aPtr = a; // circular reference: A and B will never be deleted. 
               // fix: use weak_ptr in one of the classes.
}


