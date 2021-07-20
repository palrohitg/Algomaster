//Unique character strings
#include<bits/stdc++.h>
using namespace std;

int main() {

// #ifndef ONLINE_JUDGE
// 	freopen("../input.txt", "r", stdin);
// 	freopen("../output.txt", "w", stdout);
// #endif
	set<char> s;

	int n; cin >> n;

	// iterate over the strings and find out the characters
	for (int i = 0; i < n; i++) {
		string input; cin >> input;
		for (auto ch : input) {
			s.insert(ch);
		}
	}

	int ans = s.size();
	cout << ans << endl;

	return 0;
}

/*
Worst Case :
All element would be unique right
let says that let of all the subsquences is nth elements
O(NlogN)
O(N)


*/