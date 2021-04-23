#include <iostream> 
#include <vector>

using namespace std;

void print(const vector<int>& my_vector)
{
	cout << "Vector content:  {  ";
	cout << "}\n\n";
}

int main() 
{
	vector<int> brittany = {1, 2, 3, 4, 5};
	print(brittany);
	return 0;
}
