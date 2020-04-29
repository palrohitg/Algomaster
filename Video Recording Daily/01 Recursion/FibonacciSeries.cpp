// fibonnacci Series  Nth fib number
// Compute the nth term of the fibonnaci series you have given n then findout the nth fibonnaci number
#include <iostream>
using namespace std;

int fib(int n) {
	// Base Case
	if(n == 0) {
		return n;
	}

	if(n == 1) {
		return n;
	}
	// Recursion Case
	return fib(n-1) + fib(n-2);
}

int main(int argc, char const *argv[])
{
	cout << fib(5);
	return 0;
}