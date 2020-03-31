/*
  Find number of good subarrays  :  Subarray which is divide by the N take the count of each subarray as 1.
  Input = 5 5 5 5 5
  Output = 15 

  Solution : 
  * Generate all the subarray : With Efficient Methods is Kadane Algorithm
  * Find the Subarray whose sum is divide by N and remainder is 0
  * Take the count of each subarray which is divide by the N 

*/

#include <iostream>
using namespace std;

int divisbleSubarray(int arr[], int n) {
	int count=0;
	int cur_sum=0;
	for(int i=0; i<n; i++) {
		cur_sum=0;
		for(int j=i; j<n; j++) {
			cur_sum = cur_sum + arr[i];
			if(cur_sum%n == 0) {
				// << cur_sum << endl;
				count++;
			}
		}
	}
	return count;
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		int arr[100000];
			for(int i=0; i<n; i++) {
				cin >> arr[i];
			}
			// for(int i=0; i<n; i++) {
			// 	cout <<  arr[i] << " ";
			// }
			// cout << endl;
			// cout << n << endl;
    		cout << divisbleSubarray(arr,n) << endl;
	}
	return 0;
}
