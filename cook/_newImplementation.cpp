#include <iostream> 
#include <string> 

class Person 
{
  public:
    std::string name;
    explicit Person(const std::string& name): name { name } {};
    std::string getname() const { return name; }
};

class Student : public Person 
{

  private: 
    int semester; 

  public:
    Student( const std::string& aname, int asemester ) : Person::Person{ aname }, semester{ asemester } {};
    int getSemester() const { return semester; }
};

int main()
{
  Student semester1{"Ose Osa", 3};
  std::cout << semester1.getSemester() << "\n";
}
