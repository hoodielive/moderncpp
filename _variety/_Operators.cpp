#include <iostream>
#include <string>

using namespace std;

class Student
{
  public:
    Student() : Student("", "") {}

    Student(const string& firstName, const string& lastName): mFirstName(firstName), mLastName(lastName) {}

    bool Equals(const Student& otherStudent)
    {
      return mFirstName == otherStudent.mFirstName && mLastName == otherStudent.mLastName;
    }

  private:
   string mFirstName;
   string mLastName;
};

int main(int argc, const char* argv[])
{
  Student studentA("Jon", "Doe");
  Student studentB("Jane", "Doe");

  if (studentA.Equals(studentB))
  {
    cout << "studentA and studentB are the same." << endl;
  }
  else
  {
    cout << "studentA and studentB are NOT the same." << endl;
  }

  return 0;
}
