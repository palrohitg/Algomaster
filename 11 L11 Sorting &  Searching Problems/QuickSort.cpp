// Quick Sort Interesting Algorithm

#include<iostream>
using namespace std;


int partitionIndex(int arr[], int s, int e) {
	int pivot = arr[e];
	int i = s-1;
	int j = s;
	for (; j <= e - 1; j++) {
		if(arr[j] < pivot) {
			i = i+1; // increase the small regions
			swap(arr[i],arr[j]);
		}
	}
	swap(arr[i+1], arr[e]);

	// return the index
	return i+1;
}
void quickSort(int arr[], int s, int e) {
	if (s >= e) {
		return;
	}

	// find the partition index
	int p = partitionIndex(arr, s , e);
	quickSort(arr, s, p-1);
	quickSort(arr, p+1,e);
}


int main() {

	int arr[] = {5, 1, 4, 3, 2};
	quickSort(arr, 0, 4);

	for (int i = 0; i < 5; ++i)
	{
		cout << arr[i] << " ";
	}
}