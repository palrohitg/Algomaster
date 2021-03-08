#include<bits/stdc++.h>
using namespace std;

int main() {

	int t; cin >> t;

	while (t--) {
		int n; cin >> n;
		vector<int> arr(n);
		vector<int> left(n);
		vector<int> right(n);

		for (int i = 0; i < n; i++) {
			int num; cin >> num;
			arr[i] = num;
		}

		for (int i = 0; i < n; i++) {
			// Default values assign here
			left[i] = 1;
			for (int j = 0; j < i; j++) {
				if (arr[j] < arr[i]) {
					left[i] = max(left[i], left[j] + 1);
				}
			}
		}

		// count all smaller than current elements
		for (int i = n - 1; i >= 0; i--) {
			right[i] = 1;
			for (int j = i + 1; j < n; j++) {
				if (arr[j] < arr[i]) {
					right[i] = max(right[j] + 1, right[i]);
				}
			}
		}

		int ans = 0;
		// Compute the maximum length
		for (int i = 0; i < n; i++) {
			ans = max(ans, left[i] + right[i] - 1);
		}
		cout << ans << endl;
		arr.clear();
		left.clear();
		right.clear();
	}


	return 0;
}