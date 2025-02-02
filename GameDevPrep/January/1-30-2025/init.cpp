#include <print>
#include <map>
#include <vector>

using namespace std;

class foo
{
  int a_; 
  double b_;
  
  public:
    foo(): a_(0), b_(0) {}
    foo(int a, double b =  0.0 ) : a_(a), b_(b) {}
};

class Bar
{
  int a_;
  int b_;

  public:
    Bar(int a, int b): a_(2), b(33) {};
    
}

int main()
{
  T object { other };
  
  // Containers
  std::vector<int> v { 1, 2, 3, 4, 5 };
  std::map<int, std::string> m { { 1, "one " }, { 2, "two" }};
  
  //  Dynamically allocated arrays
  int* arr2 = new int[3] { 1, 2, 3 };

  // Arrays
  int arr1[3] { 1, 2, 3 };



  foo f1 {};
  foo f2 { 42, 1.2 };
  foo f3 { 42 };
}
