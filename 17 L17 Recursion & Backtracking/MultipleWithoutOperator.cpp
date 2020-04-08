/*
	Test case : 1. If both are postive 
				2. If one is negative 
				3. if noth are negative then 

*/

#include<iostream>
using namespace std;


// Test case if works on the negative number 5, -3 = -15
int mul(int a, int b) {
	//base case
	if (b == 0) {
		return 0;
	}
	// it b is postive number
	if (b > 0) {
		return a + mul(a, b - 1);
	}
	// means b is negative
	return -a + mul(a,b+1);
}

int main() {
	cout << mul(-5, -3);
	return 0;
}