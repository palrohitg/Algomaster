#include<iostream>
using namespace std;


void merge(int arr[], int s , int e) {

	int mid = (s + e) / 2;

	int i = s;
	int j = mid + 1;
	int k = s;

	int temp[100];

	while (i <= mid and j <= e) {
		if (arr[i] < arr[j]) {
			temp[k] = arr[i];
			k++; i++;
		}
		else {
			temp[k] = arr[j];
			k++; j++;
		}
	}

	while (i <= mid) {
		temp[k] = arr[i];
		k++; i++;
	}

	while (j <= e) {
		temp[k] = arr[j];
		k++; j++;
	}

	for (int x = s; x <= e; x++) {
		arr[x] = temp[x];
	}
	return;
}


void mergeSort(int arr[], int s, int e) {

	if (s >= e) return;

	int m = (s + e) / 2;
	mergeSort(arr, s, m);
	mergeSort(arr, m + 1, e);
	merge(arr, s, e);

}


int main() {

	int arr[100] = {12, 1, 4, 0, 123};
	int n = sizeof(arr) / sizeof(arr[0]);

	mergeSort(arr, 0, n - 1);

	for (int i = 0; i < n; i++) {
		cout << arr[i] << " ";
	}


	return 0;
}
