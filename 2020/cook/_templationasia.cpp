#include <iostream> 

template <typename T>
class MyClass
{
  private:
    T x; 
  public:
    MyClass(T xx);
};

template <typename T> 
MyClass<T>::MyClass(T xx) : x { xx }
{
  std::cout << "Constructor invoked. The value of x is: " << x << std::endl;
}

int main(int argc, const char* argv[])
{
  MyClass<int> o { 123 };
  MyClass<double> o2 { 123.33 };
}
