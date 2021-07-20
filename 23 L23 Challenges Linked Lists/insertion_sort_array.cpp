// Swapping doesn't work here i need to shift the elements one by one


#include<iostream>
using namespace std;


// print the arrays
void insertion_sort(int arr[], int n) {

	for (int i = 1; i <= n - 1; i++) {
		int key = arr[i];
		int j = i - 1;

		while (j >= 0 and arr[j] > key) {
			arr[j + 1] = arr[j];
			j--;
		}
		arr[j + 1] = key;

	}


	for (int i = 0; i < n; i++) {
		cout << arr[i] << " ";
	}
}


int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int arr[] = {10, 50, 9, 1, 0};
	int n = 5;
	insertion_sort(arr, n);

	return 0;
}