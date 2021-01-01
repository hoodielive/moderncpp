#include <iostream>
#include <string>
#include <vector>

class MyClass
{
    private:
        std::vector<std::string> myString;

    public:
        MyClass();
        const std::vector<std::string>& getMyString() const; 
        void add(const std::string str);
        const std::string toString() const;
};

MyClass::MyClass()
{
    this->myString.push_back("Hi I am #1");
}

const std::vector<std::string>& MyClass::getMyString() const
{
    return this->myString;
}

void MyClass::add(const std::string str)
{
    this->myString.push_back(str);
}

const std::string MyClass::toString() const
{
    std::string str = "";

    for(size_t i = 0; i < this->myString.size(); i++)
    {
        str += std::to_string(i) + ": " + this->myString[i] + "\n";
    }
    return str;
};

int main()
{
    MyClass obj;
    std::cout << obj.toString() << std::endl;

}