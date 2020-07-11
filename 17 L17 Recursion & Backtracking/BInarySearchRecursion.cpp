#include<iostream>
using namespace std;

// find the index of the key elements

int binarySearchRec(int a[], int s, int e, int key) {
	if(s<=e) {
		int mid = (s+e)/2;
		if(a[mid] == key) {
			return mid;
		}
		else if (a[mid] < key) {
			 binarySearchRec(a, mid+1, e, key ); // right part
		}
		else {
			 binarySearchRec(a, s, mid-1, key);
		}
	}
	return -1;
}

int main() {
	int a[] = {1, 2, 3};
	int n = sizeof(a)/sizeof(int);
	cout << n;
	cout << binarySearchRec(a, 0, n-1, 3) << endl;
}