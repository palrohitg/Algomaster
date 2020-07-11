#include<iostream>
using namespace std;


// Simply recursion problems
int power(int a, int n) {
	// Base case
	if (n == 1) {
		return a;
	}
	// Recursive Case
	return a * power(a, n - 1);
}


// Basics recursion problems
int multiply(int a, int n) {
	// Base case
	if (n == 1) {
		return a;
	}
	// Recursive Case
	return a + multiply(a, n - 1);
}



// learn some import concepts of recursion
int lastOccurence(int *a, int n, int key) {
	// Base case
	if (n == 0) { // no elements are there
		return -1;
	}

	int idx = lastOccurence(a + 1, n - 1 , key);
	if (idx == -1) {
		if (a[0] == key) {
			return 0;
		}
	}

	return 1 + idx;
}


// size of the output arrays
int allOccurence(int *a, int i, int n , int key , int *out , int j) {
	// Base case if reaches to end
	if (i == n) {
		return j;
	}
	// if key found put into the output arrays
	if (a[i] == key) {
		out[j] = i;
		j++;
	}
	return allOccurence(a, i + 1, n, key, out, j);
}


int main() {
	int arr[] = {3, 3, 3, 4};
	int size = sizeof(arr) / sizeof(int);
	//cout << lastOccurence(arr, size, 3);
	//cout << endl;
	//cout << multiply(2, 3);
	int out[100] ;
	cout << allOccurence(arr, 0, size, 3, out, 0);
	cout << endl;
	return 0;
}
