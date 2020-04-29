// Important question from the interview 
// Ask as many doubt you have to TA complete the concept and teach to another person so you concept will be more clear

// DNF usually used to find out the number of 0,1,2
// Same complexity as the counting sort but sort the elements in the single pass


// We need to make the 3 regions and then place the each elements in their correct position and Assuem the all the elements in the mid to high regions
// Note :  Inplace Algorithms 
#include<iostream>
using namespace std;

void dfn_sort(int a[], int n) {
	int low=0;
	int mid=0;
	int high = n-1;

	// Untill all the elements get exhausted
	while(mid <= high) {
		// zero then mid ++ or low se replace
		if(a[mid] == 0) {
			swap(a[mid],a[low]);
			mid++;
			low++;
		}

		// if it 1 then  already correct postion then increment only the mid
		if(a[mid] == 1) {
			mid++;
		}
		if(a[mid] == 2) {
			swap(a[mid], a[high]);
			high--;
		}
	}

	// Finally print the elmentts
	for(int i=0; i<n; i++) {
		cout << a[i] << " ";
	}
}
// 0 ,1 , 2, 1, 2
int main(int argc, char const *argv[])
{
	int arr[] = {2,2,2,2,1,1,1,0, 0,0,0,0,1,1,2,2};
	int n = sizeof(arr)/sizeof(int);
	dfn_sort(arr,n);
	return 0;
}
