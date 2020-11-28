// pass by value and pass by reference of the arrays

#include<bits/stdc++.h>
using namespace std;

// arrays are pass by reference
void mergeSort(int output[], int size) {
	output[0] = 10;
}


int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int input[1000];
	int size; cin >> size;

	for (int i = 0; i < size; i++) {
		cin >> input[i];
	}

	// merge sort
	mergeSort(input, size);

	for (int i = 0; i < size; i++) {
		cout << input[i] << " ";
	}


	return 0;
}