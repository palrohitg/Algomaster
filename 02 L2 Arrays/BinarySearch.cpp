// Binary search an efficient methods
// * Used when the array is sorted 

#include<iostream>
using namespace std;

int binarySearch(int arr[],int n, int key) {
	int s=0, e=n-1;
	while(s <= e){
	// mid is smaller then search in right region
		int mid = (s+e)/2; 
		if(arr[mid] == key) {
			return mid;
		}
		if(arr[mid] < key) {
			s = mid+1;
		}
		if(arr[mid] > key) {
			e = mid-1;
		}
	
	}	
	return -1;
}

int main() {
	int arr[100];
	int n;
	int key;
	cin >> n;
	for (int i = 0; i <n ; ++i)
	{
		cin >> arr[i];
	}
	cin >> key;
	cout << "Resut is " << endl;
	cout << binarySearch(arr,n,key);

	return 0;
}