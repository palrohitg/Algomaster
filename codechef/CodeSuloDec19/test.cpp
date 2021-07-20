#include<bits/stdc++.h>
using namespace std;

int main() {

// #ifndef ONLINE_JUDGE
// 	freopen("input.txt", "r", stdin);
// 	freopen("output.txt", "w", stdout);
// #endif

	int arr[10] = {5, 2, 1, 4, 0};
	int n = 5;
	sort(arr + 1, arr + (n - 1));

	for (int i = 0; i < n; i++) {
		cout << arr[i] << " ";
	}


	return 0;
}