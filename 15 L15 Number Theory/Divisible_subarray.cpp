/*
  Find number of good subarrays  :  Subarray which is divide by the N take the count of each subarray as 1.
  Input = 5 5 5 5 5
  Output = 15 

  Solution : 
  * Generate all the subarray : With Efficient Methods is Kadane Algorithm
  * Find the Subarray whose sum is divide by N and remainder is 0
  * Take the count of each subarray which is divide by the N 

*/
/*

// This is O(N^2)
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
		int arr[n+1];
			for(int i=0; i<n; i++) {
				cin >> arr[i];
			}
    		cout << divisbleSubarray(arr,n) << endl;
	}
	return 0;
}
*/


#include<iostream>
#include<cstring>
using namespace std;

#define ll long

ll a[1000005], pre[1000005];

int main(int argc, char const *argv[])
{
	int t;
	cin >> t;
	while(t--) {
		memset(pre,0,sizeof(pre));// set all the value of the prefix array to zero
		int  n; 
		cin >> n;	
		pre[0] = 1;
		int sum=0;
		for(int i=0; i<n; i++) {
			cin >> a[i];
			sum = sum + a[i];
			sum = sum %n;
			sum = (sum + n) % n;
			pre[sum]++ ;
		}

		ll ans =0; 
		for(int i=0; i<n; i++) {
			ll int m = pre[i];
			ans += (m)*(m-1)/2;
		}
		cout << ans;
	}
	
	return 0;
}