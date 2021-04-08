#include<iostream>
using namespace std;

void insertionSort(int arr[], int n) {

	//iterate over the arrays
	for (int i = 1; i < n; i++) {
		int j = i - 1;

		while (j >= 0 and arr[j] > arr[i]) {

			//shift the left element to right
			arr[j +  1] = arr[j];
			j--;
		}

		// ith element at correction place
		arr[j + 1] = arr[i];
	}

	return;
}

int main() {

	int arr[] = {1, 2, 10, 4, 0};
	int n = 5;

	//insertion sort
	insertionSort(arr, n);

	// print arrays elements
	for (int i = 0; i < n; i++) {
		cout << arr[i] << " " << endl;
	}
	return 0;
}