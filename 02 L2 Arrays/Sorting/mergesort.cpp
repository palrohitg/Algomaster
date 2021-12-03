#include<iostream>
using namespace std;

// Heart of the mergeSort merge Routine
/*
	- Always remember merge is always 
	pass by the reference code.
*/ 
void merge(int arr[], int start, int mid, int end) {
	
}


// mergeSort
void mergeSort(int arr[], int start, int end) {

	if (start < end) {
		// find the middle elements
		int mid = start + (end - start)/2; 

		// recursion will solve the left part
		mergeSort(arr, start, mid); 

		// recursion will solve on the right part
		mergeSort(arr, mid + 1, end); 

		// final the merge routine pay
		merge(arr, start, mid, end); 
	}
}

int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int n; cin >> n; // number of elements
	int arr[10000];

	// taking input for arrays of n elements 
	for (int i = 0; i < n; i++) {
		cin >> arr[i]; 
	}

	mergeSort(arr, 0, n - 1); 

	// print the resultant arrays after the mergeSort
	for (int i = 0; i < n; i++) {
		cout << arr[i] << " "; 
	}

	cout << end; 


	return 0; 
}  