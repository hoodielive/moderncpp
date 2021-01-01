#include <iostream>
#include <string>

class Person
{
    private:
        int age;
        bool std;
        bool female;
        std::string name;
        std::string address; 
        std::string profession; 

    public:
        Person()
        {
            // Default Constructors.
            std::cout << "I am a default constructor." << "\n";
            this->name = "none";
            this->age = -1;
            this->female = false;
            this->address = "none";
            this->profession = "none";
            this->std = false;
        }

        // Specialized Constructors.
        Person(std::string name, 
               int age, 
               bool female, 
               std::string address, 
               std::string profession, 
               bool std)
        {
            std::cout << "I am a specialized constructor!" << "\n";
            this->name = name;
            this->age = age;
            this->female = female;
            this->address = address;
            this->profession = profession;
            this->std = std;
        }

        // Destructor.
        ~Person()
        {
            std::cout << "Hello and good riddens by the destructor!" << "\n";
        }

        // Accessors.
        inline const std::string& getName() const { return this->name; }
        inline const int& getAge() const { return this->age; }
        inline const bool& getIsFemale() const { return this->female; }
        inline const std::string& getAddress() const { return this->address; }
        inline const std::string& getProfession() const { return this->profession; }
        inline const bool& getStd() const { return this->std; }

        // Modifiers.
        inline void setName(const std::string& name) { this->name = name; }
        inline void setAge(const int& age) { this->age = age; }
        inline void setIsFemale(const bool& female) { this->female; }
        inline void setAddress(const std::string& address) { this->address; }
        inline void setProfession(const std::string& address) { this->profession; }
        inline void setStd(const bool& std) { this->std; }
        

        // Functions.
        const std::string toString() const
        {
            std::string finalString = "";

            finalString = 
            "Name: " + this->name + " | " + 
            "Age: " + std::to_string(this->age) + " | " + 
            "isFemale: " + std::to_string(this->female) + " | " + 
            "Address: " + this->address + " | "  + 
            "Profession: " + this->profession + " | " + 
            "Has std: " + std::to_string(this->std);

            return finalString;
        }
};
