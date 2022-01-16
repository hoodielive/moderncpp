#include <iostream>
#include <string>

using namespace std;


class Person
{
  public:
    explicit Person(const string& nomen) : name { nomen } {};
    string getname() const { return name; };
    string name;

};

class Student : public Person 
{
  private:
    int semester;

  public:
    explicit Student(const string& name, int semester);
    int getsemester() const { return semester; }
};

int main(int argc, char *argv[])
{

  Person person { "Jon Doe" };
  cout << person.getname() << "\n";

  Student student { "Jan Doe", 2 };
  cout << student.getname() << "\n";
  cout << "Semester is: " << student.getsemester() << '\n';

  return 0;
}
