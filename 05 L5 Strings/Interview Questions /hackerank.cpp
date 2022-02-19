// Illustration of range-for loop
// using CPP code
#include <iostream>
#include <vector>
#include <map>

//Driver
int main()
{
	// Iterating over whole array
	std::vector<int> v = {0, 1, 2, 3, 4, 5};
	for (int i : v)
		std::cout << i << ' ';
	return 0;
}
