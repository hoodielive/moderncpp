#include <cstdio>

struct ClockWork
{
	void add_year()
	{
		year++;
	}

	bool set_year(int new_year)
	{
		if (new_year < 2019) return false;
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
	ClockWork clockwork;
	if (!clockwork.set_year(2018))
	{
		clockwork.set_year(2019);
	}
	clockwork.add_year();
	printf("year: %d", clock.get_year());
}
