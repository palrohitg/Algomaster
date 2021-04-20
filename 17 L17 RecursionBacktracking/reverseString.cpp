#include<iostream>
using namespace std;

void reverseString(string str, int s, int e) {
	// Base Case
	if (s > e) { return ;}

	// recursive case
	reverseString(str, s + 1, e);
	cout << str[s];
	return;
}

int main() {

	string str = "vikas";
	reverseString(str, 0, str.size() - 1);


	return 0;
}

// time = O(N) and space = O(N) constant works
// but stack frame N in each function call


/*
Best Approach :
1. Two pointer by iterations only O(1) Space
2. Make two pointer,
   a. start b. ends
   swaps both the elements
   start++, end--
   take n / 2 swaps only


Simpler Questions :
1. Add Two Numbers
Problem : linked list is given with non-negative numbers,
		   reverse the orders and each digit contains a single digit.
Note : Assume the two numbers do not contains any leading zeroes

*/