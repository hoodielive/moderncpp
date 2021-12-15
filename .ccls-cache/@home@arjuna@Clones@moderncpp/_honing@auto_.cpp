#include <iostream>

struct Foo
{
	auto val() const
	{
		return m_;
	}
	auto& cref() const
	{
		return m_;
	}
	auto& mref()
	{
		return m_;
	}
	int m_{};
};



int main()
{
}
