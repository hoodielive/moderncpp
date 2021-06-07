#include <iostream>
#include <sstream>
#include <string>
#include <ctime>
#include <array>

class Person
{
    private:
        std::string name;
        int age;

    public:
        Person(std::string name = "Empty", int age = -1)
        {
            this->name = name;
            this->age = age;
        }

        ~Person() {}

        const std::string toString() const
        {
            std::stringstream ss;
            ss << "Name: " << this->name << " | Age: " << this->age << "\n";
            return ss.str(); 
        }
};

int main()
{
    srand(time(NULL));

    Person me("Larry", 29);
    Person frend("Jordan", 28);
    Person frend2("Vincent", 28);

    Person* seat = nullptr;

    if (rand() % 1 > 0)
        seat = &me;
    else
        seat = &frend;

    std::cout << seat->toString();

    Person* newPerson = new Person("Dude", 50);

    std::cout << newPerson->toString();

    delete newPerson;

    Person **pArr = new Person*[5];
    delete[] pArr;

    return 0;
}