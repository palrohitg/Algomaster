/*
	Implement the Linear Search Algo Using Recursion
*/

#include<iostream>
using namespace std;

int linearSearchRecursion(int arr[], int i, int n, int key) {
	// we have to find the index of that element position
	if (i == n) {
		return -1;
	}

	if (arr[i] == key) {
		return i;
	}
	return linearSearchRecursion(arr, i + 1, n, key);
}
int main() {

	int arr[] = {23, 34, 2, 4, 5, 3, 54};
	int size = sizeof(arr) / sizeof(arr[0]);
	//int key = 50;
	cout << linearSearchRecursion(arr, 0 , size, 23);
	return 0;
}