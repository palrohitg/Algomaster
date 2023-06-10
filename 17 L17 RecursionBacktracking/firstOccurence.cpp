#include<bits/stdc++.h>
using namespace std;

// recurisve functions : 
void AllOccurence(int arr[], int i, int n, int target) {

	if (i == n) return;

	if (arr[i] == target) {
		cout << i << endl;
	}

	AllOccurence(arr, i + 1, n, target);
}

// last occurence


void firstOcurrence(int arr[], int i, int n, int target) {

	if (i == n) return; 

	if (arr[i] == target) {
		cout << i << endl; 
		return; 
	}

	return firstOcurrence(arr, i+1, n, target); 
}


void lastOccurence(int arr[], int i, int n, int target) {
	if (i == n) return; 

	if (arr[i] == target) {
		lastOccurence(arr, i+1, n, target); 
		cout << i << endl; 
		return; 
	}

	return lastOccurence(arr, i+1, n, target); 
}

int main() {

// #ifndef ONLINE_JUDGE
// 	freopen("input.txt", "r", stdin);
// 	freopen("output.txt", "w", stdout);
// #endif

	int n; cin >> n;
	int arr[100];

	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	int target; cin >> target;

	lastOccurence(arr, 0, n, target);

	return 0;
}