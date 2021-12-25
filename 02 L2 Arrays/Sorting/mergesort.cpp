#include<iostream>
using namespace std;

// Heart of the mergeSort merge Routine
/*
	- Always remember merge is always 
	pass by the reference code.
*/ 
void merge(int arr[], int start, int mid, int end) {
	/*
		- find out the size of left and right arrays
		- create two arrays left and right arrays 
		- create three indexes, leftindex, rightindex, mergeSortIndex 
		- copy the origin elements of the arrays to the left and right part
		- Make the loops for the lenght of the arrays based on the left and right arrays 
		- If some elements are left in right / left arrays then make place them as well there

		

	*/
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