#include<bits/stdc++.h> 
using namespace std; 
/*
	upper bound -> Greater value return karta 
	lower_bound --> equal to if have or else then it return greater values in the maps s

*/

int main(int argc, char const *argv[]) {	
	int arr[] = {3, 2, 1}; 	
	int n = 3;

	// for (int i = 0; i < n; i++) {
	// 	cout << arr[i] << " " << endl; 
	// }
	sort(arr, arr + n); 

	// for (int i = 0; i < n; i++) {
	// 	cout << arr[i] << " " << endl; 
	// }

	int *ptr = upper_bound(arr, arr+n, 5); 
	cout << *ptr; 

	cout << "testing the values function" << endl; 



	// vector<int> a(n); 

	// sort(a.begin(), a.endl()); 

	// auto it = upper_bound(a.begin(), a.end(), 25); 

	// cout << (*it) << endl; // vectors iterator return and arrays basically return the vectors here
	
	return 0; 
}