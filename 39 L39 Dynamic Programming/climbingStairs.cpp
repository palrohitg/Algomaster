#include<bits/stdc++.h>
using namespace std;

int main() {

#ifndef ONLINE_JUDGE
	freopen("../input.txt", "r", stdin);
	freopen("../output.txt", "w", stdout);
#endif
	int n; cin >> n;
	vector<int> v;


	for (int i = 0; i < n; i++) {
		int num; cin >> num;
		v.push_back(num);
	}

	for (int i = 0; i < n; i++) {
		cout << v[i] << " ";
	}


	return 0;
}