#include <iostream>

class Real
{
    public:
        Real(double value) : m_value(value) {}
        operator float() { return m_value; }
        float getValue() const { return value; }

    private:
        double m_value { 0.0 };
};

void test(bool result)
{
    std::cout << std::boolalpha;
    std::cout << "Test => " << result << "\n";
}

int main()
{
    Real real{ 3.14159 };
    test(real);

    if (real)
    {
        std::cout << "True: " << real.getValue() << "\n";
    }
    else
    {
        std::cout << "False: " << real.getValue() << "\n";
    }
    
}