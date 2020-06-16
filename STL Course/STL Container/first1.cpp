// Generic Programming : works with anytime of the data

#include<iostream>
using namespace std;

template <typename T> 
int search(T arr[], int n, T key) {

	for (int i = 0; i < n; ++i)
	{
		if(arr[i] == key){
			return i;
		}
	}
	return n;
}



int main() {
	// int arr[] = {1, 4, 5, 6}; 
	// int size  = sizeof(arr)/sizeof(int);
	// cout << search(arr, size, 3); 
	float a1[] = {1.3, 4.5, 3.2};
	float key = 3.2;
	cout << search(a1, 3, key); 
	return 0;
}