// FInd out the possoble pair of in the reverse order
// Check out the Maximum Number of Pairs that can be performed by arrays

#include<iostream>
using namespace std;

int merge(int arr[], int s, int e) {
	int mid = (s+e)/2;
	int i = s;
	int j = mid + 1;
	int k =s;
	// Set the count to zero
	int cnt=0;
	int temp[100];
	while(i <= mid && j <= e) {
		if( arr[i] < arr[j]) {
			temp[k] = arr[i];
			k++;
			i++; 
		}
		else {
			temp[k] = arr[j];
			k++;
			j++;
			// count will be incremented
			cnt  +=  mid - i + 1;
		}
	}

	// put the left array
	while(i <= mid) {
		temp[k] = arr[i];
		k++;
		i++; 
	}

	while(j <= e) {
		temp[k] = arr[j];
		k++;
		j++;
	}
	//  finally copy the arrays to the original one
	for(int i=s; i<=e ; i++) {
		arr[i]=temp[i];
	}

	return cnt;
}



int inverseCount(int arr[], int s, int e) {

	// Base Case 
	if(s >= e) {
		return 0; // no pair counts
	}
	// Divide the array
	int mid = (s + e) /2;

	// Recursively Solve
	int x = inverseCount(arr, s, mid);
	int y = inverseCount(arr, mid+1, e);
	int z = merge(arr, s, e);

	return x+y+z;

}

int main() {
	int arr[] = {1,5,2,6,3,0};
	int n = sizeof(arr)/sizeof(n);
	cout << inverseCount(arr,0,n-1);
    
	return 0;
}