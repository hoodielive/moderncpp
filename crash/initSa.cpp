#include <iostream>

struct PodStruct
{
	uint64_t a;
	char b[256];
	bool c;
};

int main()
{
	PodStruct  initialized_pod1{};
	PodStruct initialized_pod2 = {};
	PodStruct initialized_pod3{42, "hello"};
	PodStruct initialized_pod4{42, "hello", true};
}
