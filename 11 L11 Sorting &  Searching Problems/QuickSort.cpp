// Quick Sort  In place Algorithm 
#include<iostream>
using namespace std;


// Return the partition index
int partitionIndex(int a[], int s, int e) {

	// choose the last element as pivot
	int pivot = a[e];
	int i = s-1;

	//check from s to e-1
	for(int j=s; j <= e-1; j++) {
		if(a[j] < pivot) {
			i = i+1;
			swap(a[i], a[j]);
		}
	}
	swap(a[i+1], a[e]); //swap the pivot elements

	return i+1;
}

void quickSort(int a[], int s, int e) {
	// Base case 
	if(s >= e) {
		return;
	} 

	// Partitioning the arrays
	int p = partitionIndex(a,s,e);
	cout << p << endl;
	quickSort(a,s,p-1);
	quickSort(a,p+1,e);
}

int main(int argc, char const *argv[])
{
	int arr[] = {5,2,3,1,6};
	int n = sizeof(arr)/sizeof(int);
	quickSort(arr,0,n-1);

	for(int i=0; i<n; i++) {
		cout << arr[i] << " ";
	}

	return 0;
}
