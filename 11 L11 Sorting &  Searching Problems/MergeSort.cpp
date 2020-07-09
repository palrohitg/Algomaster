// Dry Run on the smal and check whether the code is working on not


#include<iostream>
using namespace std;

void merge(int a[], int s, int e) {
	int mid = (s+e)/ 2;
	int i = s;
	int j = mid + 1;
	int k = s;
	int temp[100];
	while(i <= mid && j <= e) {
		if(a[i] < a[j]) {
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
	while(i <= mid){
		temp[k] = a[i];
         k++;
         i++;     
	}

	while(j <= e) {
		temp[k] = a[j];
		k++;
		j++;
	}

	// Paste into the original arrays
	for(int i=s; i <=e; i++) {
		a[i] = temp[i];
	}

}

void mergeSort(int a[], int s, int e) {
	// Base Case
	if (s >= e) {
		return;
	}

	// Divide the arrays
	int mid = (s + e) / 2;
	// recursively sort the arrays
	mergeSort(a, s, mid);
	mergeSort(a, mid + 1, e);

	// Merge the arrays
	merge(a, s, e);
}

int main() {
	int arr[] = {5, 0, 3, 2, 0};
	mergeSort(arr, 0, 4);

	for (int i = 0; i < 5; i++) {
		cout << arr[i] << " ";
	}
	return 0;
}