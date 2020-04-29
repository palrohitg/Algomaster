// Counting Sort : Make the frequency of the array then try to print the number according to that frequency
// Useful when we have the small range a to b then it will take the O(N) times to solve his sort
// when we have a range of data 
#include<iostream>
using namespace std;

void count_sort(int a[], int n) {
	// find the largest number

	int largest = -1;
	for(int i=0; i<n; i++) {
		largest = max(largest, a[i]);
	}

	// create the freq array
	int *freq = new int[largest+1] {0};
	for (int i = 0; i < n; ++i) // increase the frequency of the elements
	{
		freq[a[i]] ++;
	}
	// push the element in the original arrays
	int j=0;
	for(int i=0; i<=largest; i++) {
		while(freq[i] > 0) {
			a[j] = i;  // yeh tho index dega original main paste kardiya
			freq[i]--;
			j++;
		} 
	}

	for(int i=0; i<n; i++) {
		cout << a[i] << " ";
	}
}

int main() {
	int arr[] = {5,1,3,4,0,5,2,4,89,32,13,35,23}; // sort the arrays using the frequency sort
	int n = sizeof(arr)/sizeof(int);
	count_sort(arr,n);
	return 0;
}
