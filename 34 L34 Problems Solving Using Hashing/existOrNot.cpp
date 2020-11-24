
/*
1. Simply Unordered set Question.

1<=t<=12
1<=L<=10^5 (n=number of elements in array).
-10^5<=A[i]<=10^5 (A[i]=ith element of array).

1<=Q<=10^4
-10^5<=x<=10^5

1
6
12 3 -67 67 34 2
4
4
5
67
7


// Searching make be efficienct


*/
#include<bits/stdc++.h>
using namespace std;



int main() {

// #ifndef ONLINE_JUDGE
// 	freopen("input.txt", "r", stdin);
// 	freopen("output.txt", "w", stdout);
// #endif

	int t; cin >> t;
	int arr[100000];

	while (t--) {
		int L; cin >> L;

		for (int i = 0; i < L; i++) {
			cin >> arr[i];
		}

		sort(arr, arr + L);

		int Q; cin >> Q;


		for (int i = 0; i < Q; i++) {
			int data; cin >> data;
			if (binary_search(arr, arr + L, data)) {
				cout << "Yes";
			}
			else {
				cout << "No";
			}
			cout << endl;
		}
		cout << endl;
	}


	return 0;
}

// Approach-> 2 Create the hashset and insert the values/find the query unordered_set