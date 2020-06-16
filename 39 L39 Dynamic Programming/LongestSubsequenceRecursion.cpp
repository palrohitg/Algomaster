// Given two string find out the longest sub-sequence of the strings
// find out the length of the longest common sub-sequence
// Write one Recursion Solu
#include<iostream>
#include<string>
using namespace std;

int Lcs(string x, string y, int m, int n) {

	// Base case
	if(m == 0 || n == 0) {
		return 0;
	}

	// Choice Diagram
	// if the last elements are equal
	if(x[m-1] == y[n-1]) {
		return 1 + Lcs(x, y, m-1, n-1);
	}
	// Two choice here check on the first string and decrease the second one and vice-versa recursively
	else {
		return max(Lcs(x, y, m-1, n) , Lcs(x, y, m, n-1)); 
	}
}

int main() {
	string x;
	string y;
	cin >> x;
	cin >> y;
	int m = x.length();
	int n = y.length();
	cout << Lcs(x, y, m, n);


	return 0;
}