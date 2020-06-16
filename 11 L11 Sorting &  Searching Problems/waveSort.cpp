// Import Interview Question Asked by many company
// Wave sort : big , small, big ,small etc like a wave form
// Brute Force sort the arrays then replace it with alernate elements NlogN for sorting N for Swapping
// Not True when i is one and all another case we can use it
#include<iostream>
using namespace std;

/*
void wave_Sort(int arr[], int n) {

	// check for the first elements
	// Place the first two elements to correct postion and then directly jump to 2 index
	int j = 0;
	int temp[n + 1] = {0};
	if (arr[j] > arr[j + 1]) {
		temp[j] = arr[j];
		temp[j + 1] = arr[j + 1];
		j = j + 2;
	}
	else {
		swap(arr[j], arr[j + 1]);
		temp[j] = arr[j];
		temp[j + 1] = arr[j + 1];
		j = j + 2;

	}
	// check the rest of the remaining elements

	while(j<n) {

		// if mid elements is greater than the left and the right element then it is coreect place
		if(arr[j] > arr[j-1] && arr[j] > arr[j+1]) {
			temp[j] = arr[j];
			temp[j+1] = arr[j+1];
			j = j+2 ;
		}
		// if its smaller than the left element then replace it
		if(arr[j] < arr[j-1]) {
			swap(arr[j],arr[j-1]);
		}
		// if the smaller than the right one
		if(arr[j] < arr[j+1]) {
			swap(arr[j],arr[j+1]);
		}

	}

	// finally copy the data in original one
	for(int i=0; i<n; i++) {
		arr[i] = temp[i];
	} 
}

*/

int main() {

	int arr[] = {0,1,0,0,0};
	int n = sizeof(arr) / sizeof(int);
	//wave_Sort(arr, n);

	for(int i=0; i<n; i+=2) {
		// not applicable for the last one

		// previous wale se compare kar
		if(i !=0 and arr[i] < arr[i-1]) {
			swap(arr[i] , arr[i-1]);
		}

		// next wale se compare kar
		if(i != (n-1) and arr[i] < arr[i+1]) {
			swap(arr[i],arr[i+1]);
		}
	}
	for(int i=0; i<n; i++) {
		cout << arr[i] << " ";
	}

	return 0;
}