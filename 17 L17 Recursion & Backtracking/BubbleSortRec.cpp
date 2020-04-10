// Implementation of bubble sort algo Recursively
/*
  So to sort the N elements we have to atleast place at the N-1 elements to the correct position.
*/

#include<iostream>
using namespace std;
void bubbleSortRecursive(int arr[], int n) {
	// Base Case
	if (n == 1) {
		return;
	}

	// sorted only the first elements the rest of will do the bubble Sort Recursion

	for (int j = 0; j <= n - 2; j++) {
		if (arr[j] > arr[j + 1]) { // first index is greater than the second one than Swap it
			swap(arr[j], arr[j + 1]);
		}
	}
	bubbleSortRecursive(arr, n-1);
}

void bubbleSortRecursive2(int arr[],int j, int n) {
	// Base case 
	if(n==1) {
		return;
	}
	// if j reaches to n-1 index then again set the j value to zero
	if (j == n-1) {
		return bubbleSortRecursive2(arr,o, n-1)
	}

	if(arr[j] > arr[j+1]) {
		swap(a[j], a[j+1]) 
	}
	bubbleSortRecursive2(a,j+1,n); // Visualize the example how it is working internally then you will get the clear Ideas that how to write the code
}
int main() {

	int arr[] = {5, 4, 1, 2};
	bubbleSortRecursive(arr, 4);

	for (int i = 0; i < 4; ++i)
	{
		cout << arr[i] << " ";
	}

	return 0;
}