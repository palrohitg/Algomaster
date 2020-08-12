#include <iostream>
using namespace std; 

// void merge(int a[], int s,int e) {
// 	int mid = (s+e)/2;
// 	int i = s;
// 	int j = mid + 1;
// 	int temp[10];
// 	int k = 0;
// 	while((i <= mid) and (j<=e)) {
// 		if(a[i] < a[j]) {
// 			temp[k++] = a[i++];
// 		}
// 		else{
// 			temp[k++] = a[j++];
				
// 		}
// 	}

// 	while(i <= mid) {
// 		temp[k++] = a[i++];
// 	}

// 	while(j<=e) {
// 			temp[k++] = a[j++];
	
// 	}
// 	// copy the array in the original arrays
// 	for(int i=s; i<=e; i++) {
// 		a[i] = temp[i];
// 	}
// }

// void mergeSort(int a[], int s, int e) {
// 	if(s>=e) {
// 		return;
// 	}
// 	int mid = (s+e)/2;
// 	// call the merge left  and right part
// 	mergeSort(a,s,mid);
// 	mergeSort(a,mid+1,e);
// 	merge(a,s,e); 

// }

int main() {
	// int a[] {5,4,3,2,1};
	// int n =  sizeof(a)/sizeof(int);
	// mergeSort(a,0,n-1);

	// for (int i = 0; i < n; ++i)
	// {
	// 	cout << a[i] << " ";
	// }

	int a = 2;
	int b = 10;
	int c = 20;
	if(a<b and b<c) {
		cout << "working well";
	}


	return 0;
}