#include <iostream>
#include <print>


template <typename B>
class Box
{
  private: 
    B value;
    
  public:
    Box(B val) : value(val) {}
    
    void display() const 
    {
      std::cout << "Value: " << value << "\n"; 
    }
};

template <typename T>
T add(T a, T b)
{
  return a + b;
}

constexpr int process(int x)
{
  if consteval 
  {
    return x * 2;
  }
  else
  {
    return x + 2;
  }
}

constexpr std::string greet(const std::string& name)
{
  return "hello, " + name + "!";
}

int main()
{
  std::print("Hello, {}\n", "Hello");

  constexpr auto message = greet("Beginner");
  std::println(message);
   
  return 0;
}
