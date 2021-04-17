#include <iostream>

struct Clocker
{
	void add_year() 
	{
		year++
	}

	bool set_year([[may_unused]] int new_year)
	{
		if (new_year < 2021) return false;
		year = new_year; 
		return true;
	}

	int get_year()
	{
		return year;
	}

	private:
		int year;
};

int main()
{
	return 0;
}
