#include<iostream>
#include<string.h>
using namespace std;

void replacePI(char *arr, int i, int n) {
	// Base case
	if (i == n - 1) {
		return;
	}
	if (arr[i] == "p" and arr[i + 1] == "i") {
		// replace the value
		int j = i + 2;

		// go j to the last
		while (arr[j] != "\0") {
			j++;
		}

		while (j >= i + 2) {
			arr[j + 2] = arr[j];
			j--;
		}
		arr[i] = '3';
		arr[i + 1] = '.';
		arr[i + 2] = '1';
		arr[i + 3] = '4';
		replacePI(arr, i + 4, n);
	}
	else {
		// increment the i
		replacePI(arr, i + 1, n);
	}
	return;
}


int main() {

	int t; cin >> t;
	while (t--) {
		char *ptr = new char[1000];
		cin >> ptr;
		replacePI(ptr, strlen(ptr));
		while (ptr != "\0") {
			cout << ptr;
		}
		delete[] ptr;
		cout << endl;
	}
	return 0;
}