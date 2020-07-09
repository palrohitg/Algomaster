/// Divide and then merge sort


#include<iostream>
using namespace std;

void merge(int a[], int s, int e) {
	int mid = (s + e) / 2;
	int i = s;
	int j = mid + 1;
	int k = 0;
	int temp[10] = {0};
	while (i <= mid && j <= e) {
		if (a[i] < a[j]) {
			temp[k] = a[i];
			k++;
			i++;
		}
		else {
			temp[k] = a[j];
			k++;
			j++;
		}
	}

	while (i <= mid) {
		temp[k] = a[i];
		k++;
		i++;
	}

	while (j <= e) {
		temp[k] = a[j];
		k++;
		j++;
	}

	// copy the elements to originals
	for (int x = s; x <= e; x++) {
		a[x] = temp[x];
	}
}



void mergeSort(int a[], int s, int e) {
	// Base Case
	if (s >= e) {
		return;
	}

	// Divide
	int mid = (s + e) / 2;
	// Sort
	mergeSort(a, s, mid);
	mergeSort(a, mid + 1, e);
    // Merge the two one
	merge(a , s, e);
}

int main() {
	int n;
	cin >> n;
	int arr[10];
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	mergeSort(arr, 0, n - 1);
	// Print the result
	for (int i = 0; i < n; ++i)
	{
		cout << arr[i] << " ";
	}
	return 0;
}