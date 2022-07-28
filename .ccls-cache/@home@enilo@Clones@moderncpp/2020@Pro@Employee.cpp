#include <iostream>
#include <string>

class Employee
{
	public:
		Employee();
		void promote(int raiseAmount = 1000);
		void demote(int demeritsAmount = 1000);
		void hire(); // Hires the employee.
		void fire(); // Relieves employee from duty/role.
		void display() const; // Outputs employee info to console.

		// Getters/Setters.
		void setFirstName(const std::string& firstName);
		const std::string& getFirstName() const;

		void setLastName(const std::string& lastName);
		const std::string& getLastName() const;

		void setEmployeeNumber(int employeeNumber);
		int getEmployeeNumber() const;

		void setSalary(int newSalary);
		int getSalary() const;

		bool getIsHired() const;
};

int main()
{
	return 0;
}
