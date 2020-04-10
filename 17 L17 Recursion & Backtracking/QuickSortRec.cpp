/*
	QuickSort is Very efficient Algorithm O(nlogn)
	* Inplace we don't need to create extra array
	1. Pivot 
	2. Divide the array is about the pivot elements 
	3. Recursively Sort the two part
*/

 #include<iostream>
 using namespace std;

 
// Partition the array elements Function
int Parition(int a[] , int s, int e){

	int i=s-1;
	int j=s;
	int pivot = a[e]; // make the last elements as pivot element

	for(; j<e; j++) {
		if(a[j] <= pivot) {
			i++;
			swap(a[j],a[i]); // transfer the region 2 elements to region 1
		}
	} 

	// Make the correct position of the Pivot element
	swap(a[i+1], a[e]); // find swap the pivot element
	return i+1; // return the index of the elements
}

void quickSort(int a[], int s, int e) {

	// if only one element
	if(s>=e) {
		return;
	}
	// Find the pivot index correct position 
	int p = Parition(a,s,e);

	// Divide the by the pivot elements and recursively sort using the quicksort 
	quickSort(a,s,p-1); // call in the left part
	quickSort(a,p+1,e); //call on the right part	
}

int main() {

	int arr[] = {5,4,1,10,0};
	int n = sizeof(arr)/sizeof(int);
	quickSort(arr,0,n-1);

	// Print the elements after sorting 
	for(int i=0; i<n; i++) {
		cout << arr[i] << " ";
	}

	return 0;
}