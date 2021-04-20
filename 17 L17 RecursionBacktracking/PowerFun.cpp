/*
1. Calculate Power 2^3=8
2. Fast power is Optimal solution 
   if b == even f(a,b) = (a,b/2)^2   , 2^8 = (2,4)^2 -> (2^2)^2 -> 2
   if b == odd f(a,b) = a*(a,b/2)^2
*/
#include<iostream>
using namespace std;

// Not efficient

int recursivePower(int a, int n) {

	// Base case
	if (n == 0) {
		return 1;
	}
	int ans = a * recursivePower(a, n - 1); // it will take the N recursive steps 
	return ans;
}


// fast power LogN+1 = LogN

int fastPower(int a, int b) {

	if(b==0) {
		return 1;
	}
	int smallAns = fastPower(a,b/2);
	smallAns *= smallAns; // taking the square of the number

	// if odd 
	if(b&1) {
		return a*smallAns;
	}
	return smallAns;
}
int main() {
	int a = 2, n = 3;
	cout << recursivePower(a, n) << endl;

	return 0;
}