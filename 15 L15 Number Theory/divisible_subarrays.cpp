// Given an arrays find out the no of good subarrays . Good Subarrays are those subarrays who is completed divided by the number
/*

	Why sum = sum % n; reduced the length and if we have n then it make sure the number is going to positive anywhere right;
	that why we are trying to reduce the length first then make it positive


*/



#include<iostream>
#include<cstring>
#define ll long long int
using namespace std;

ll a[100000], fre[100000];




int noOfGoodSubarrays(int c[], int n) {

	int count = 0;

	for (int i = 0; i < n; i++) {
		if (c[i] % n == 0) {
			count++;
		}
	}

	return count;
}

int main() {

	int t; cin >> t;
	memset(fre, 0, sizeof(fre));
	while (t--) {

		int n; cin >> n;
		int sum = 0;
		fre[0] = 1;



		// Build the frequency arrays
		for (int i = 0; i < n; i++) {
			cin >> a[i];

			sum = sum + a[i];
			sum %= n; // Decrease the range
			sum = (sum + n) % n; // increase take the mod so the element is always positive
			fre[sum]++; // increment the frequency arrays
		}

		ll ans = 0;

		for (int i = 0; i < n; i++) {  // no of combination we can make from one start and one endpoints means one subarrays is going to exits in the range and if some how we are found out the number of start and end points in between them than we are able to says that the
			int m = fre[i];
			ans = ans + (m * (m - 1)) / 2;
		}

		cout << ans;
		cout << endl;
	}

	return 0;
}