#include <print>

using namespace std;

class Complex
{
  public:
    double real, imag;

    Complex(double r, double i) : real(r), imag(i) {}

    Complex operator+(const Complex& other) const
    {
      return Complex(real + other.real, imag + other.imag);
    }

    void display() const
    {
      print("{} + {}", real, imag);
    }
};

template<typename T>
T add(T a, T b)
{
  return a + b;
};

int main()
{
  float a = add(5.1f, 6.2f);
  float b = add(9.1f, 9.7f);

  print("This is float {} and this is float {} \n", a, b);

  Complex c1(1.2, 3.4), c2(5.6, 7.8);
  Complex result = add(c1, c2);
  print("Result of adding complex numbers: ");
  result.display();

  return 0;
}
