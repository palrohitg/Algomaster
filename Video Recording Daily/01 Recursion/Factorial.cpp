#include <iostream>
using namespace std;

int fact(int n) {
	// Base case
	if(n==0) {
		return 1;
	}
	int smallFact = fact(n-1);

	// Recursive Case
	int ans = n * smallFact;
	return ans;
}


int main() {

	cout << fact(4);
	return 0;
}