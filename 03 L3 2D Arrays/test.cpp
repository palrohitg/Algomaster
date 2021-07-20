#include<bits/stdc++.h>
using namespace std;

int main() {

#ifndef ONLINE_JUDGE
	freopen("../input.txt", "r", stdin);
	freopen("../output.txt", "w", stdout);
#endif

	string str; cin >> str;
	unordered_map<char, int> map;

	for (auto ch : str) {
		map[ch]++;
	}

	int i;
	for (i = 0; i <= str.length(); i++) {
		char ch = str[i];

		if (map[ch] == 1) {
			cout << i << endl;
			break;
		}
		if (i == str.length()) {
			cout << -1 << endl;
		}
	}

	return 0;
}