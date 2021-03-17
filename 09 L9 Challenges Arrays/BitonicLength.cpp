/*
	Bitonic Arrays are those who First increasing then Decreasing

	Problem State :
	   1. Elements like 12 ,4, 78, 90, 45, 23  return 5 (4,78,90,45,23)
	   2. Decreasing like 40, 30, 30 ,10  retunr 4 (40,30,20,10)
	   3. Increasing like 30,40,50   return 3 (30,40,50)
	   4. Single Elements is also Bitonic Subarrays

	 Solution :
	   1. Make an array INC[] to count the increaseing Elements
	   2. Make an array DEC[] to count the descreasing Elements
	   3. Calculte the arrays to Find out the MAX length
	   4. DP problems
*/

#include <iostream>
using namespace std;

int maxBitonicLength(int arr[], int n) {
	int inc[n], dec[n];
	int val = 1;
	// Initialize all the value to one

	for (int i = 0; i < n; i++) {
		inc[i] = val;
		dec[i] = val;
	}

	// Make increasing array
	for (int i = 0; i < n; i++) {
		if (arr[i] < arr[i + 1]) {
			inc[i + 1] = inc[i] + 1;
		}
	}

	/*for(int i=1; i<n; i++) {   // Reverse order main check karna
		// if(arr[i] < arr[i+1]) {
	    if(arr[i-1] <= arr[i]) {
			inc[i] = inc[i-1]+1;
		}
	}*/


	//	Make decreasing arrays
	for (int i = n - 1; i >= 0; i--) {
		if (arr[i] < arr[i - 1]) {
			dec[i - 1] = dec[i] + 1;
		}
	}

	// Printing the arrays
	// for(int i=0; i<n; i++) {
	// 	cout << inc[i] << " ";
	// }
	// cout << endl;

//    for(int i=0; i<n; i++) {
	// 	cout << dec[i] << " ";
	// }
	// cout << endl;

	//calcualte the index value to find out the maxlength
	int maximum = 1;
	int max[n];
	for (int i = 0; i < n; i++)
	{
		max[i] = inc[i] + dec[i] - 1;
		if (max[i] > maximum) {
			maximum = max[i];
		}
	}

	return maximum;
}

int main() {
	int t, n, count = 0;
	cin >> t;
	int arr[1000000];
	while ((count < t) & (count <= 100)) {
		cin >> n;
		for (int i = 0; i < n; i++) {
			cin >> arr[i];
		}
		count++;
		cout << maxBitonicLength(arr, n) << endl;
	}
	return 0;
}