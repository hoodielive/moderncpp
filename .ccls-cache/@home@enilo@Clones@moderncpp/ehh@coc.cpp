#include <iostream>
#include <vector>

class Person
{
    private: 
        int length;
    public:
        Person(std::string name, std::string address, int age, bool isMale) {};
        ~Person(){};
        std::string name;
        std::string address;
        bool isMale;
        bool isFemale;
        
        const std::string nameField(std::string name)
        {
            this->name = name;
            return name;
        };
        const std::string addressField()
        {
            this->address = address;
            return address;
        }

        const std::string& getName(std::string nameField)
        {
            return this->nameField(nameField);
        }
};
int main()
{
    Person vinny = Person("Omo Sango", "Stratosphere", 67, false); 

    std::cout << "I can't unfortunately, I'm on on my way home" << std::endl;
    std::cout << vinny.getName() << std::endl;

    return 0;
}
