/*
 Intituion behined this Algo :
 * Find the smallest elements in the array and replace this element with the first index and do the same steps for the remains 
 * So after the N=1 Iteration or we can say that each Iteration we have the sorted element in place 

*/

#include<iostream>
#include<climits>
using namespace std;


// find the smallest element and replace return to selectionSort
int smallestElement(int a[],int pos, int n) {
	int min_Index = pos; // assume this is postion
	for(int i=pos+1; i<n; i++) { // check from position plus and then return on change the indexes
		if(a[i] < a[min_Index]) {
			min_Index = i;
		}
	} 
	return min_Index;
}


//swap the element which is smallest and return to the main
void selectionSort(int a[], int n) {
	for(int i=0; i<n-1; i++) {
	    int smallIndex = smallestElement(a,i,n);
		swap(a[i],a[smallIndex]);
	}

}

int main() {
	int arr[] = {5,1,4,0,2};
	int n = sizeof(arr)/sizeof(int);
	for(int i=0; i<n ; i++) {
		cout << arr[i] << " ";
	}
	cout << '\n';
	selectionSort(arr,n);
	for(int i=0; i<n ; i++) {
		cout << arr[i] << " ";
	}

	// cout << minIndex(arr,n);
	return 0;
}