// Sort the arrays using merge sort mostly used in the STL librarys
// Time complexity of the merge Sort NlogN
// Space complexity depends upon the recursive call stack and the auxliary space temp variables N

#include<iostream>
using namespace std;

void merge(int arr[], int s, int e) {

	int	mid = (s + e) / 2;
	int i = s;
	int j = mid + 1;
	int k = s;
	int temp[e + 1];

	// first the first/second subarrays is not going to empty
	while (i <= mid && j <= e) {
		if (arr[i] > arr[j]) {
			temp[k] = arr[j];
			k++;
			j++;
		}
		else {
			temp[k] = arr[i];
			k++;
			i++;
		}
	}

	// one arrays is complete exhausted
	while (i <= mid) {
		temp[k] = arr[i];
		k++;
		i++;
	}

	while (j <= e) {
		temp[k] = arr[j];
		k++;
		j++;
	}

	// copy to the original arrays
	for (int i = s; i <= e; i++) {
		arr[i] = temp[i];
	}

}


// when we have only the two elements dry run the code using the merge
void mergeSort(int *arr, int s, int e) {
	// Base case what to do when only one elements
	if (s == e) {
		return;
	}

	if (s < e) {
		int mid = (s + e) / 2;
		mergeSort(arr, s, mid); // left subarrays
		mergeSort(arr, mid + 1, e); // right subarrays
		merge(arr, s, e);
	}
}

int main() {
	int n; cin >> n;
	int *arr = new int[n];
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	mergeSort(arr, 0, n - 1);
	for (int i = 0; i < n; i++) {
		cout << arr[i] << " ";
	}

	delete[] arr;

	return 0;
}