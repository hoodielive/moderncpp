#include <iostream> 

template <typename T>
void myfunction(T param)
{
  std::cout << "The value of a parameter is: " << param << std::endl;
}

template<typename U, typename P> 
void myfunction2(U u, P p)
{
  std::cout << "The first parameter is: "  << u << std::endl; 
  std::cout << "The second parameter is: "  << p << std::endl; 
}

template <typename C>
class MyClass
{
  private:
    C x; 
  public:
    MyClass(C xx) : x{ xx } {}
    C getValue()
    {
      return x;
    }
};

int main()
{
  myfunction<int>(123);
  myfunction<double>(123.456);
  myfunction<char>('A');
  int x = 2354;
  double d = 2345.63;
  myfunction2<int, double>(x, d);

  MyClass<int> o{ 123 };
  std::cout << "The value of x is: " << o.getValue() << std::endl;

  MyClass<double> o2{ 123.33 };
  std::cout << "The value of x is: " << o2.getValue() << std::endl;
}
