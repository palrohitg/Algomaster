/*
	 Tower of hanoi is Very interesting Problems using Recursion
	 Remember three things src, dest, helper
	 Tricks Assuming is best think when it comees to Recursion
*/

#include<iostream>
using namespace std;

void towerOfHanio(int n, char src, char dest, char helper) {
	// base case
	if (n == 0) {
		return;
	}
	// shift N-1 disk to src to helper
	towerOfHanio(n - 1, src, helper, dest);

	// shift the nth disk to destination
	cout << "Move " << n << " From " << src << " to " << dest << endl;

	//shift n-1 to the destination
	towerOfHanio(n - 1, helper, dest, src);
}

int main(int argc, char const *argv[])
{
	int n = 3;
	towerOfHanio(n, 'A', 'C', 'B');
	return 0;
}