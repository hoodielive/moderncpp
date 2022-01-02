#include <iostream>
#include <string>

class Person 
{
  public: 
    std::string name; 
    explicit Person(const std::string& aname): name{ aname } {};
    inline std::string getName() const { return name; } 
};

class Student : public Person 
{
  private:
    int semester; 

  public:
    Student(const std::string aname, int asemester): Person::Person{ aname }, semester { asemester } {};
    int getSemester() const { return semester; }
};

int main()
{
  Person person { "Jon Doe." };
  std::cout << person.getName() << "\n";
}
