#include<bits/stdc++.h>
using namespace std;

void merge(int arr[], int start, int mid, int end) {

	int i = start;
	int j = mid + 1;
	int k = 0;

	int temp[end - start + 1] = {0};

	while (i <= mid and j <= end) {
		if (arr[i] < arr[j]) {
			temp[k] = arr[i];
			k++;
			i++;
		}
		else {
			temp[k] = arr[j];
			j++;
			k++;
		}
	}

	while (i <= mid) {
		temp[k] = arr[i];
		k++;
		i++;
	}

	while (j <= end) {
		temp[k] = arr[j];
		j++;
		k++;
	}


	// copy the elements back to original arrays
	for (int i = start; i < k; i++) {
		arr[i] = temp[i];
	}
	return;
}


void mergeSort(int arr[], int start, int end) {

	if (start < end) {
		int mid = (start + end) / 2;
		mergeSort(arr, start , mid);
		mergeSort(arr, mid + 1, end);
		merge(arr, start, mid, end);

	}
}

int main() {


	int arr[100] = {40 , 10 , 3, 100, 1};
	int n = sizeof(arr) / sizeof(arr[0]);

	mergeSort(arr, 0, n - 1);

	for (int i = 0; i < n; i++) {
		cout << arr[i] << " ";
	}

	return 0;
}