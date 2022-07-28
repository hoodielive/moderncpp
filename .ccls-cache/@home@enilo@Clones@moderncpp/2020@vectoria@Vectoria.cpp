#include <vector>

/*
 * A vector manages elements in a dynamic array. It enables random access, which means we can access
 * each element directly with index.
 * Appending and removing elements at the end of an array is very fast. But insterting an element in
 * the middle or at the beginning of the array takes time because all the following elements should be
 * moved to mamke room for it while maintaining the order.
 *
 */

 int main()
 {
		std::vector<int> vec1;
		std::vector<int> vec2 (3);
		std::vector<int> vec3 (vec2.begin(), vec2.end());
		std::vector<int> vec4 (vec3);
		int myInt[] = { 1, 2, 3 };
		std::vector<int> vec5 (myInt, myInt + sizeof(myInt) / sizeof(int) );

		return 0;
 }
