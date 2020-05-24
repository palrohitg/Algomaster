/*
	Find out the maximum elements in each windows of size k
	Time Complexity is O(k^2)  Not a feasible solutions approx n^2
*/

#include<iostream>
using namespace std;

int findMaxiumInWindow(int arr[], int start, int end) {
		int maximumElement = -1;
		for(int i = start; i < end; i++) {
			maximumElement = max(maximumElement, arr[i]);
		}	

	return maximumElement;
}


void maximumElementInWindows(int arr[], int n, int window_size) {
	for(int i = 0; i < n; i += window_size) {
		cout << findMaxiumInWindow(arr, i, i+window_size) << " ";
	}
}

int main() {
	int arr[] = {1, 2, 3, 1, 4, 5, 2, 3, 6};
	int size = sizeof(arr) / sizeof(int);
	int k = 3;
	maximumElementInWindows(arr, size, k);
	return 0;
}