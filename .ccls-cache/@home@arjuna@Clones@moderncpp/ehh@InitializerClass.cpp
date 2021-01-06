#include <iostream>
#include <ctime>

class Dice
{
    private:
        int value;

    public:
        Dice(int value);
        virtual ~Dice();

        const int& getValue() const;

        const int toss() const;
};

Dice::Dice(int value) : value(value) // Initializer list for class constant member variables and refs.
{
    this->value = value;
}

Dice::~Dice()
{

}

const int& Dice::getValue() const
{
    return this->value;
}

const int Dice::toss() const
{
    return rand()%this->value + 1;
}

int main()
{
    srand(time(static_cast<unsigned>(0)));
    Dice d6(6);
    std::cout << d6.toss() << "\n";

    return 0;
}
