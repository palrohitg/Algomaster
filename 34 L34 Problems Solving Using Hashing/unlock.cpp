/*

Approach-> 2 Pointer approaches
1. firstly make left and right
2. if in right side find greater elment than left swap it
3. if left is greater than right increment the left pointers make right as fixed
4. Do the same unless the left reached to right or swapped is exhausted

Approch->2 :
1. create a hashmap of the number of value,index
2. find the correct poistion of the each index by N-i;

*/
#include <bits/stdc++.h>
using namespace std;
int main() {
	int n, k;
	cin >> n >> k;
	vector<int> v;
	unordered_map<int, int> m ;
	for (int i = 0; i < n; i++) {
		int x;
		cin >> x;
		v.push_back(x);
		m[v[i]] = i ;
	}
	for (int i = 0; i < n && k > 0; i++) {
		int x = n - i;
		if (v[i] == x) {
			//Already correct element
			continue;
		}
		int index = m[x];
		m[v[i]] = index ;
		m[x] = i;
		swap(v[i], v[index]);
		k--;
	}
	for (int i = 0; i < n; i++) {
		cout << v[i] << " ";
	}

	return 0;
}
}