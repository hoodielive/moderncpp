#include <iostream>

class Car
{
    private:
        class Wheel
        {
            public:
                Wheel(){};
                ~Wheel(){};
        };
    public:
        Car() {};
        ~Car() {};
};

int main()
{
    return 0;
}