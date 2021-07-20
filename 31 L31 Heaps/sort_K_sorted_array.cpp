#include<bits/stdc++.h>
using namespace std;

/*
	Method 1 :
		merge Sort -> O(nlogn) but the problem is it sort all the elements

	Method 2 : Using min Heaps
		min Heaps -> insert just K + 1 element to the heaps and then find out the min one


*/


void sortKSortedArray (int arr[], int n, int k) {

	// min heap to store k + 1 element
	priority_queue<int, vector<int>, greater<int>> pq;

	// insert k + 1 element
	for (int i = 0; i <= k; i++) {
		pq.push(arr[i]);
	}

	int index = 0;

	// pop min element insert at correct index &&
	// insert next element in min heap
	for (int i = k + 1; i < n; i++) {

		arr[index++] = pq.top();
		pq.pop();

		// insert next element in the min heap
		pq.push(arr[i]);
	}


	// remove rest of the element &&
	// insert into the arrays
	while (!pq.empty()) {
		arr[index++] = pq.top();
		pq.pop();

	}

	return;
}



int main() {

	int arr[] = {1, 4, 5, 2, 3, 7, 8, 6, 10, 9};
	int n = sizeof(arr) / sizeof(arr[0]);

	int k = 2;

	sortKSortedArray(arr, n, k);

	// display the arrays
	for (int i = 0; i < n; i++) {
		cout << arr[i] << " ";
	}

	cout << endl;


	return 0;
}